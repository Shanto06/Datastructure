#include<stdio.h>
#include<process.h>
#include<stdlib.h>

#define MAX 5

int top=-1,stack[MAX];
void push();
void display();
void main()
{
    int ch;

    while(1)
    {
        printf("\n*** Stack Menu ***");
        printf("\n\n1.Push\n2.Display\n3.Exit");
        printf("\n\nEnter your choice(1-3):");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: push();
                    break;
            case 2: display();
                    break;
            case 3: exit(0);

            default: printf("\nWrong Choice!!");
        }
    }
}
void push()
{
    int val;

    if(top==MAX-1)
    {
        printf("\nStack is full!!");
    }
    else
    {
        printf("\nEnter element to push:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void display()
{
    int i;

    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nStack is...\n");
        for(i=top;i>=0;--i)
            printf("%d\n",stack[i]);
    }
}
