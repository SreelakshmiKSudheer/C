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
    Node *New = getNode(item);

    // check for availability of memory
    if (New != NULL)
    {
        Node *ptr = header->rlink;

        New->llink = header;
        header->rlink = New;
        New->rlink = ptr;

        // Update the ll of the next node
        if (ptr != NULL)
            ptr->llink = New;
    }
    else
        printf("Unable to allocate memory\n");
}


int deleteFront(Node *header)
{
    int item;

    // check whether list is empty or not
    if(header->rlink == NULL)
    {
        return INVALID;
    }
    else
    {
        Node *ptr = header->rlink;
        item = ptr->data;

        header->rlink = ptr->rlink;
        if(ptr->rlink != NULL)
            (ptr->rlink)->llink = header;

        free(ptr);
        return item;
    }

}
void display(Node *header)
{
    Node *top = header->rlink;
    Node *ptr = header->rlink;

    if(top == NULL)
    {
        printf("No element, cannot display\n");
        return ;

    }

    printf("Displaying elements of the list\n");

    while(ptr->rlink != NULL)
    {
        ptr = ptr->rlink;
    }

    while(ptr != top)
    {
        printf("%d ",ptr->data);
        ptr = ptr->llink;
    }
    printf("%d\n",ptr->data);
    

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

void push(Node* header,  int item)
{
    insertFront(header,item);
}

int pop(Node* header)
{
    int item = deleteFront(header);
    return item;
}

int main()
{
    int choice,item;
    header = getNode(-99999);
    Node* top = header->rlink;

    printf("Enter \n1] Push");
    printf("\n2] Pop");
    printf("\n3] Display");
    printf("\n4] Quit");

    do
    {
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter item: ");
                    scanf("%d",&item);
                    push(header,item);
                    break;
            case 2: item = pop(header);
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