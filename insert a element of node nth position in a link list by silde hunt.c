#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

struct node*head=NULL;
void insert()
{
    int n,i;
    struct node*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    printf("Enter the position: ");
    scanf("%d",&n);
    if(n==1)
    {
        new_node->next=head;
        head=new_node;
    }
    else
    {
        struct node*temp=head;
        for(i=1;i<n-1;i++)
        {
            temp=temp->next;
        }
        new_node->next=temp->next;
        temp->next=new_node;
    }
}
void display()
{
    struct node*new_node;
    new_node=head;
    printf("\nThe linked list: ");
    while(new_node!=NULL)
    {
        printf("%d-->",new_node->data);
        new_node=new_node->next;
    }
    printf("NULL");
}

int main()
{
    char ch;
    do
    {
        insert();
        display();
       printf("\nDo you want to insert another node?:\n");
       ch=getche();

    }while(ch!='n');


    return 0;
}

