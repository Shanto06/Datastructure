#include<stdio.h>

struct Node
{
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
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=value;
    temp->link=head;
    head=temp;
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);

    display();
    return 0;


}
