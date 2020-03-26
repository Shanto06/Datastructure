



#include<stdio.h>
#include<stdlib.h>
void preorder(struct node*r);
void insert(int value);

struct node
{
    int data;
    struct node*left;
    struct node*right;
};

struct node*root;

void preorder(struct node*r)
{
    if(r==NULL)
    return;
    printf("%d\n",r->data);
    preorder(r->left);
    preorder(r->right);

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
    root=NULL;

    insert(55);
    insert(40);
    insert(80);
    insert(34);
    insert(28);
    insert(38);
    insert(60);
    insert(90);

    preorder(root);

    return 0;
}

