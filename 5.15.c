
#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};


void push(struct Node **head_ref, int data)
{

    struct Node *ptr1 =
        (struct Node *)malloc(sizeof(struct Node));
    ptr1->data = data;
    ptr1->next = *head_ref;


    if (*head_ref != NULL)
    {

        struct Node *temp = *head_ref;
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = ptr1;
    }
    else
        ptr1->next = ptr1;

    *head_ref = ptr1;
}


void printList(struct Node *head)
{
    struct Node *temp = head;
    if (head != NULL)
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        while (temp != head);
    }

    printf("\n");
}


void deleteNode(struct Node *head, int key)
{
    if (head == NULL)
        return;


    struct Node *curr = head, *prev;
    while (curr->data != key)
    {
        if (curr->next == head)
        {
            printf("\nGiven node is not found"
                   " in the list!!!");
            break;
        }

        prev = curr;
        curr = curr -> next;
    }


    if (curr->next == head)
    {
        head = NULL;
        free(curr);
        return;
    }


    if (curr == head)
    {
        prev = head;
        while (prev -> next != head)
            prev = prev -> next;
        head = curr->next;
        prev->next = head;
        free(curr);
    }


    else if (curr -> next == head)
    {
        prev->next = head;
        free(curr);
    }
    else
    {
        prev->next = curr->next;
        free(curr);
    }
}


int main()
{

    struct Node *head = NULL;


    int n,x,m,i;
    printf("Number of array element: ");
    scanf("%d",&n);
    printf("Enter %d element: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        push(&head, x);
    }

    printf("List Before Deletion: ");
    printList(head);

    printf("Enter a element which you want to delete: ");
    scanf("%d",&m);
    deleteNode(head, m);

    printf("List After Deletion: ");
    printList(head);

    return 0;
}

