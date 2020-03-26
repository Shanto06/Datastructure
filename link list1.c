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

void insert(int value)
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


int main()
{


   int i,n,num;
   printf("Enter some number to be inserted: ");
   scanf("%d",&n);
   printf("Enter %d integer value: ",n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&num);
       insert(num);
   }


     display();


    return 0;
}

