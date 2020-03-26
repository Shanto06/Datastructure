#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* link;
};

struct Node* head;

void print()
{
    struct Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    printf("\n");
}

void insert(int value)
{
   struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
   temp->data=value;
   temp->link=head;
   head=temp;

}

int main()
{
    head=NULL;
    int n,i,data;
    printf("the number of element of array: ");
    scanf("%d",&n);
    printf("Enter %d element: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        insert(data);
    }
    printf("The element of array after insertion: ");
    print();
}

