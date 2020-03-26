/// c program to delete node with location

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

void deletenode(int pos)
{
    if(pos==1)
    {
         struct Node* temp;
         temp=head;
         head=head->link;
         free(temp);
    }
    else
    {
        int i;
        struct Node* temp1;
        temp1=head;
        printf("The array after delete: ");
        for(i=1;i<=pos-2;i++)
        {
            temp1=temp1->link;
        }
         struct Node* temp2;
         temp2=temp1->link;
         temp1->link=temp2->link;
         free(temp2);
    }
}

int main()
{

    head=NULL;
    int n,i,x,data;
    printf("Number of element Linked List: ");
    scanf("%d",&n);
    printf("Enter %d element: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        insert(data);
    }
    printf("The given array: ");
    print();
    printf("position of node want to delete: ");
    scanf("%d",&x);

    deletenode(x);
    print();

}

