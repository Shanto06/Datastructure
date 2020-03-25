#include<stdio.h>
#include<conio.h>

struct Node{
   int data;
   struct Node *left;
   struct Node *right;
};

struct Node *root = NULL;
int count = 0;

struct Node* insert(struct Node*, int);
void In_order Traversal(struct Node *root);
void Pre_order Traversal(struct Node *root));
void Post_order Traversal(struct Node *root));


void main(){
   int choice, value;
   printf("\n----- Binary Tree -----\n");
   while(1){
      printf("\n***** MENU *****\n");
      printf("1. Insert\n2. In_order Traversal\n3. Pre_order Traversal\n4.Post_order Traversal\n5.Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1: printf("\nEnter the value to be insert: ");
		 scanf("%d", &value);
		 root = insert(root,value);
		 break;
	 case 2: In_order Traversal(root); break;
     case 3: Pre_order Traversal(root); break;
     case 4: Post_order Traversal(root); break;



	 case 5: exit(0);
	 default: printf("\nPlease select correct operations!!!\n");
      }
   }





}

struct Node* insert(struct Node *root,int value){
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(root == NULL){
      newNode->left = newNode->right = NULL;
      root = newNode;
      count++;
   }
   else{
      if(count%2 != 0)
	 root->left = insert(root->left,value);
      else
	 root->right = insert(root->right,value);
   }
   return root;
}
// display is performed by using Inorder Traversal
void In_order Traversal(struct Node *root)
{
   if(root != NULL){
      In_order Traversal(root->left);
      printf("%d\t",root->data);
     In_order Traversal(root->right);
   }
}


void Pre_order Traversal(struct Node *root)
{
   if(root != NULL){
        printf("%d\t",root->data);
     Pre_order Traversal(root->left);
     Pre_order Traversal(root->right);
   }
}


void Post_order Traversal(struct Node *root)
{
   if(root != NULL){
     Post_order Traversal(root->left);
      Post_order Traversal(root->right);
      printf("%d\t",root->data);
   }
}
