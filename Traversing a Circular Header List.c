/// traversing a circular header linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
}*head;

void List(int n);
void display();

int main()
{
    int n, data, choice=1;

    head = NULL;

    while(choice != 0)
    {
        printf("CIRCULAR LINKED LIST PROGRAM\n");
        printf("\n");
        printf("1. Create List\n");
        printf("2. Display list\n");
        printf("0. Exit\n");
        printf("\n");
        printf("Enter your choice : ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the total number of nodes in list: ");
                scanf("%d", &n);
                List(n);
                break;
            case 2:
                display();
                break;
            case 0:
                break;
            default:
                printf("Error! Invalid choice. Please choose between 0-2");
        }

        printf("\n\n\n\n\n");
    }

    return 0;
}

void List(int n)
{
    int i, data;
    struct node *prevNode, *newNode;

    if(n >= 1)
    {

        head = (struct node *)malloc(sizeof(struct node));

        printf("Enter data of 1 node: ");
        scanf("%d", &data);

        head->data = data;
        head->next = NULL;

        prevNode = head;

        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            printf("Enter data of %d node: ", i);
            scanf("%d", &data);

            newNode->data = data;
            newNode->next = NULL;

            prevNode->next = newNode;

            prevNode = newNode;
        }

        prevNode->next = head;

        printf("\nCIRCULAR LINKED LIST CREATED SUCCESSFULLY\n");
    }
}

void display()
{
    struct node *current;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        current = head;
        printf("DATA IN THE LIST:\n");

        do {
            printf("Data %d = %d\n", n, current->data);

            current = current->next;
            n++;
        }while(current != head);
    }
}

