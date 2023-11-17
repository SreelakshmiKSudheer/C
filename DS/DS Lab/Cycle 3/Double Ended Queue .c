#include <stdio.h>

#define SIZE 5
#define INVALID -99999

int DQ[SIZE],f,r;

void insert_rear(int item)
{
    if(f == (r + 1) % SIZE)
        printf("Q full");
    else
    {
        if(f == -1 && r == -1)
            f = 0;
        r = (r + 1) % SIZE;
        DQ[r] = item;
        printf("rear = %d",r);
        printf("front = %d",f);
    }
}

void insert_front(int item)
{
    if(f == (r + 1) % SIZE)
        printf("Q full");
    else
    {
        if(f == -1 && r == -1)
        {
            r = SIZE - 1;
            f = SIZE - 1;
        }
        else if(f == 0)
            f = SIZE - 1;
        else
            f--;
        DQ[f] = item;
    }
    printf("rear = %d",r);
    printf("front = %d",f);
}

int delete_front()
{
    int item;

    if(f == -1)
        return INVALID;
    else
    {
        item = DQ[f++];
        if(f == (r + 1) % SIZE)
            f = r = -1;
    }

	printf("rear = %d",r);
    printf("front = %d",f);
    
    return item;
}

int delete_rear()
{
    int item;

    if(f == -1 && r == -1)
        return INVALID;
    else
    {
        item = DQ[r--];

        if(r == -1)
            r = SIZE - 1;
        else if(f == (r+1) % SIZE)
        {
            f = -1;
            r = -1;
        }
        //return item;
    }
    printf("rear = %d",r);
    printf("front = %d",f);
    return item;
}

void display()
{
    if(f == -1 && r == -1)
        printf("Q empty\n");
    else
    {
        int i;

        printf("Displaying elements of the Queue from front to rear: \n");

        for(i = f; i != r; i = (i + 1) % 5 )
        {   
        //printf("%d ",i);

            printf("%d ",DQ[i]);
        }
        printf("%d ",DQ[i]);
        printf("\n");
    }
}

int main()
{
    f = -1, r = -1;
    int choice,item;

    printf("Press\n1] Insert front:\n2] Insert rear\n3] Delete front\n4] Delete rear\n5]Display items\n6]Quit\n");

    do
    {
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter item: ");
                    scanf("%d",&item);
                    insert_front(item);
                    break;
            case 2: printf("Enter item: ");
                    scanf("%d",&item);
                    insert_rear(item);
                    break;
            case 3: item = delete_front();
                    if(item == INVALID)
                        printf("Q empty\n");
                    else    
                        printf("Deleted item: %d\n",item);
                    break;
            case 4: item = delete_rear();
                    if(item == INVALID)
                        printf("Q empty\n");
                    else    
                        printf("Deleted item: %d\n",item);
                    break;
            case 5: display();
                    break;
            case 6: break;
            default:printf("Invalid choice\n");
        }
    } while (choice != 6);
    
}
