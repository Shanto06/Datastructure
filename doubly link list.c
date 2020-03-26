#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
    struct node*pre;
};
struct node*head=NULL;

void insert()
{
    int n;
    struct node*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("%d",&n);
    new_node->data=n;
    new_node->next=NULL;
    new_node->pre=NULL;
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        head->pre=new_node;
        new_node->next=head;
        head=new_node;
    }
    printf("\n");
}
void forwarddisplay()
{
    struct node*temp=head;
    printf("Linked list in forward direction: ");
    while(temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->next;
    }
}
void reversedisplay()
{
    struct node*temp1=head;
      printf("\nLinked list in reverse direction: ");
    if(head==NULL)
    {
        return;
    }
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    while(temp1!=NULL)
    {
        printf("%d-->",temp1->data);
        temp1=temp1->pre;
    }
    printf("\n");
}

int main()
{
    char ch;
    do
    {
        insert();
        forwarddisplay();
        reversedisplay();


        printf("\nDo you want to continue?: ");
        ch=getche();
    }while(ch!='n');



    return 0;
}


