#include <stdio.h>

#define PRIORITIES 5
#define SIZE 20
#define INVALID -99999

int PQ[PRIORITIES][SIZE],front[PRIORITIES],rear[PRIORITIES];

void enqueue(int item, int prior)
{
    if(prior <= 0 && prior >= PRIORITIES)
        printf("Priority out of definition\n");
    else if(rear[prior] == SIZE-1)
        printf("Priority Overflow\n");
    else
    {
        if(front[prior] == -1)
            front[prior] = 0;
        rear[prior] += 1;
        PQ[prior][rear[prior]]= item;
    }
}

int isempty()
{
    int empty = 1;

    for(int i = 0; i < PRIORITIES; i++)
    {
        if(front[i] != -1)
        {
            empty = 0;
        }
    }

    return empty;
}
int dequeue()
{
    int item,i;

    if(isempty())
        return INVALID;
    else
    {    
        for(i = PRIORITIES - 1; i >= 0; i--)
        {
            if(front[i] != -1)
            {
                item = PQ[i][front[i]++];
                if(front[i] == rear[i] + 1)
                    front[i] = rear[i] = -1;
                return item;
            }
        }
            
    }
}


void display()
{
    int i,j;
    
    if(isempty())
        printf("Q empty");
    else
        printf("The elements are displayed along with their priorities as ITEM --- PRIORITY\n");

    for(i = PRIORITIES - 1; i >= 0; i--)
    {
        if(front[i] != -1)
        {
            for(j = front[i]; j != rear[i];i++)
            {
                printf("%d,%d\t",PQ[i][j],i);
            }
            printf("%d --- %d\t",PQ[i][j],i);
            printf("\n");
        }
    }
}

int main()
{
    int i;

    for(i = 0; i < PRIORITIES; i++)
    {
        front[i] = -1;
        rear[i] = -1;
    }

    int choice,item,prior;
    printf("Press\n1] Insert\n2] Delete\n3] Display\n4] Quit\n");

    do
    {
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter element & its priority: ");
                    scanf("%d %d",&item,&prior);
                    enqueue(item,prior);
                    break;
            case 2: item = dequeue();
                    if(item == INVALID)
                        printf("Q empty\n");
                    else    
                        printf("Deleted item = %d\n",item);
                    break;
            case 3: display();
                    break;
            case 4: break;
            default: printf("Invalid choice\n");
        }
    }while(choice != 4);

}