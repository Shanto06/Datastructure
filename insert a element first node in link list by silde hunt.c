#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

struct node*start=NULL;

void insert()
{
    struct node*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    if(start==NULL)
    {
        start=new_node;
    }
    else
    {
        new_node->next=start;
        start=new_node;
    }
}
void display()
{
    struct node*new_node;
    new_node=start;
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
