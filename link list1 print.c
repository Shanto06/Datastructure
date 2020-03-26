#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};

struct node*start=NULL;

int main()
{
    char ch;
    struct node*new_node,*current;
    do     /// i wise use while loop
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("\nplease enter the data: \n");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(start==NULL)
        {
            start=new_node;
            current=new_node;
        }
        else

        {
            current->next=new_node;
            current=new_node;
        }
        printf("\nDo you want to create another node?:\n");
        ch=getche();
    }while(ch!='n');

    printf("\nThe linked list is: ");
    while(start!=NULL)
    {
        printf("%d-->",start->data);
        start=start->next;
    }
    printf("NULL");
    getch();

    return 0;
}
