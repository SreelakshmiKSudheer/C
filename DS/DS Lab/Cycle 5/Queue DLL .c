#include <stdio.h>
#include <stdlib.h>

#define INVALID -99999

typedef struct Node
{
    int data;
    struct Node *llink;
    struct Node *rlink;
}Node;

Node *header;
Node *tail;

Node* getNode(int value)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    if(newNode != NULL)
    {
        newNode->data = value;
        newNode->llink = NULL;
        newNode->rlink = NULL;
    }

    return newNode;
}

void insertFront(Node* header, int item)
{
    int i = header->rlink==NULL;
    Node *New = getNode(item);

    // check for availability of memory
    if (New != NULL)
    {
        Node *ptr = header->rlink;

        New->llink = header;
        header->rlink = New;
        New->rlink = ptr;

        if(i)
            tail = New;

        // Update the ll of the next node
        if (ptr != NULL)
            ptr->llink = New;
    }
    else
        printf("Unable to allocate memory\n");
}

int deleteEnd(Node *header)
{
    int item;

    // check whether list is empty or not
    if(header->rlink == NULL)
    {
        return INVALID;
    }
    else
    {
        item = tail->data;
        Node *temp = tail->llink;
        free(tail);
        tail = temp;
        tail->rlink = NULL;
        return item;
    }

}


void display(Node *header)
{
    Node *rear = tail;
    Node *front = header->rlink;

    if(rear == NULL)
    {
        printf("No element, cannot display\n");
        return ;

    }

    printf("Displaying elements of the list\n");

    Node *ptr = tail;
    while(ptr != header)
    {
        printf("%d ",ptr->data);
        ptr = ptr->llink;
    }
    printf("\n");
    

}

void Free(Node *header)
{
        Node *ptr = header;
        Node *ptr1 = ptr;

        while(ptr != NULL)
        {
            ptr1 = ptr->rlink;
            free(ptr);
            ptr = ptr1;
        }
    
}

void enqueue(Node* header,  int item)
{
    insertFront(header,item);
}

int dequeue(Node* header)
{
    int item = deleteEnd(header);
    return item;
}

int main()
{
    int choice,item;
    header = getNode(-99999);
    Node* rear = header->rlink;

    printf("Enter \n1] Insert");
    printf("\n2] Delete");
    printf("\n3] Display");
    printf("\n4] Quit");

    do
    {
        printf("\nEnter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter item: ");
                    scanf("%d",&item);
                    enqueue(header,item);
                    break;
            case 2: item = dequeue(header);
                    if(item == INVALID)
                        printf("Empty\n");
                    else
                        printf("Deleted item: %d\n",item);
                    break;
            case 3: display(header);
                    break;
            case 4: break;

            default: printf("Invalid Input\n");
        }
    } while (choice != 4);

    Free(header);
    
}