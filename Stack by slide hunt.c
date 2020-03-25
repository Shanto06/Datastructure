#include<stdio.h>
#define MAXSIZE 4
int stack[MAXSIZE];
int top=-1;

void push(int item)
{
    if(top==MAXSIZE-1)
    {
        printf("The stack is overflow\n");
        return;
    }
    else
    {
        top++;
        stack[top]=item;
        printf("%d is push in the stack\n",item);
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("The stack is Underflow\n");
        return;
    }
    else
    {
        item=stack[top];
        top--;
        printf("%d is poped from the stack\n",item);
        return;

    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
        printf("\n");
    }
}
int main()
{
    int x,ch;
    char option;
   do
   {
        printf("\npress 1 of stack: ");
    printf("\npress 2 of pop: ");
    printf("\npress 3 of display: ");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
                 printf("Enter the value: ");
                 scanf("%d",&x);
                 push(x);
                 break;
        case 2:
                 pop();
                 break;
        case 3:
                 display();
                 break;
        default:printf("wrong input\n");

    }

       printf("\nDo you want to continue?: ");
       option=getche();
   }while(option!='n');

    return 0;
}
