



#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*left;
    struct node*right;
};

struct node*root=NULL;
void display()
{
    struct node*temp;
    temp=root;
    while(temp!=NULL)
   {
        printf("%d ",temp->data);
        display(temp->right);
         display(temp->left);
   }
   printf("\n");
}


void insert(int value)
{
    struct node*newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->right=NULL;
     newNode->left=NULL;

     if(root==NULL)
     {
         root=newNode;
     }
     else
     {
          struct node*temp=root;
          if(newNode->data<=temp->data)
          {
              ///left

              if(temp->left==NULL)
              {
                 temp->left=newNode;
                 break;
              }
              else
              {
                  temp=temp->left;
              }
          }
          else
          {
              ///right
              if(temp->right==NULL)
              {
                 temp->right=newNode;
                 break;
              }
              else
              {
                  temp=temp->right;
              }

          }


     }
}

int main()
{
    insert(55);
    insert(40);
    insert(80);
    insert(34);
    insert(60);
    insert(90);
    insert(28);
    insert(38);
    display();

    return 0;
}
