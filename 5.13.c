
#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node * nextptr;
}*stnode,*ennode;


void List(int n);
int Find(int FindElem, int n);
void display();

int main()
{
    int n,m;
    int i,FindElem,FindPlc;
    stnode = NULL;
    ennode = NULL;
	printf("\n Circular Linked List :\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    m=n;

    List(n);
    display();
    printf(" Input the element you want to find : ");
    scanf("%d", &FindElem);

    FindPlc=Find(FindElem,m);
	if(FindPlc<n)
		printf(" Element found at node %d \n\n",FindPlc);
	else
		printf(" This element does not exists in linked list.\n\n");

    return 0;
}

void List(int n)
{
    int i, num;
    struct node *preptr, *newnode;

    if(n >= 1)
    {
        stnode = (struct node *)malloc(sizeof(struct node));

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL;
        preptr = stnode;
        for(i=2; i<=n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf(" Input data for node %d : ", i);
            scanf("%d", &num);
            newnode->num = num;
            newnode->nextptr = NULL;
            preptr->nextptr = newnode;
            preptr = newnode;
        }
        preptr->nextptr = stnode;
    }
}

int Find(int FindElem, int a)
{
	int ctr=1;
	ennode=stnode;
	while(ennode->nextptr!=NULL)
	{
		if(ennode->num==FindElem)
			break;
		else
			ctr++;
			ennode=ennode->nextptr;
			if (ctr==a+1)
			break;
	}
	return ctr;
}

void display()
{
    struct node *tmp;
    int n = 1;

    if(stnode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = stnode;
        printf("\n Data entered in the list are :\n");

        do {
            printf(" Data %d = %d\n", n, tmp->num);

            tmp = tmp->nextptr;
            n++;
        }while(tmp != stnode);
    }
}
