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

void delete_node(int position)
{
    int i;
   if(position==1)
   {
      struct Node*temp;
      temp=head;
      head=head->link;
      free(temp);
   }
   else
   {
       struct Node*temp1;
       temp1=head;
       for(i=1;i<=position-2;i++)
       {
           temp1=temp1->link;
       }
       struct Node*temp2;
       temp2=temp1->link;
       temp1->link=temp2->link;
       free(temp2);
   }




}

int main()
{
    insert(10);
    insert(4);
    insert(3);
    insert(1);

    display();

    delete_node(1);

    display();


    return 0;
}



