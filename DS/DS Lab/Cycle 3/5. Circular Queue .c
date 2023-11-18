#include <stdio.h>

#define SIZE 3
#define INVALID -9999

int Q[SIZE],front,rear;

void enqueue(int item)
{
    if(front == (rear + 1) % SIZE)
        printf("Q full, Coulcn't insert item\n");
    else
    {
        if(front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        Q[rear] = item;

    }
}

int dequeue()
{
    if (front == -1)
        return INVALID;
    else
    {
        if(front == (rear + 1) % SIZE)
        {
            front = -1;
            rear = -1;
        }
        return Q[front--];
    }
}

void display()
{
    if (front == -1)
        printf("Q empty\n");
    else
    {
        int i;
        
        for(i = front; i <= rear; i++)
            printf("%d ",Q[i]);
        printf("\n");
    }
}
int main()
{
    int choice,item;
    front = -1, rear = -1;
    printf("Press\n1] Insert\n2] Delete\n3] Display\n4] Quit\n");

    do
    {
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter element: ");
                    scanf("%d",&item);
                    enqueue(item);
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