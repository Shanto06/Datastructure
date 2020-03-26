#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

struct node*head=NULL;

void insert(int value)
{
    struct node*new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=value;
    new_node->next=head;
    head=new_node;
}

void display()
{
    struct node*temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d-->",temp->data);
        temp=temp->next;
    }
    printf("NULL");

}

void delete(int n)
{
    int i;
    struct node*temp1;
    temp1=head;
    if(n==1)
    {
        head=temp1->next;
        free(temp1);
    }
    else
    {
        struct node*temp2;
        for(i=1;i<=n-2;i++)
        {
            temp1=temp1->next;
        }
        temp2=temp1->next;
        temp1->next=temp2->next;
        free(temp2);
    }
}
int main()
{
    int n;
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    display();
    printf("\nenter the position: \n");
    scanf("%d",&n);
    delete(n);
    display();
    printf("\n");


}
