#include<stdio.h>
struct Node{
    int data;
    struct Node*link;
};

struct Node*head=NULL;

void display()
{
    struct Node*temp;
    temp=head;
    while(temp!=NULL)
   {
        printf("%d ",temp->data);
        temp=temp->link;
   }
   printf("\n");
}

void insert_at_end(int value)
{
     struct Node*temp;
     temp=( struct Node* )malloc(sizeof( struct Node));
     temp->data=value;
     temp->link=NULL;
     if(head==NULL)
     {
         head=temp;
     }
     else
     {
          struct Node*t;
          t=head;

          while(t->link!=NULL)
          {
              t=t->link;
          }
          t->link=temp;
     }
}

void insert_sort(int value)
{
     struct Node*temp1;
     temp1=( struct Node*)malloc(sizeof( struct Node));
     temp1->data=value;
     if(head==NULL || temp1->data<head->data)
     {
         temp1->link=head;
         head=temp1;
     }
     else
     {
          struct Node*pred,*p;
          pred=head;
          p=pred->link;
          while(p!=NULL && temp1->data>p->data)
          {
              pred=p;
              p=p->link;
          }
          pred->link=temp1;
          temp1->link=p;
     }
}

int main()
{
    insert_at_end(2);
    insert_at_end(3);
    insert_at_end(6);
    insert_at_end(19);

    insert_sort(20);

    display();

    return 0;
}



