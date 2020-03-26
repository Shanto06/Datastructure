/// Linear Search

#include<stdio.h>
#include<conio.h>
void main()
{

	int DATA[10], i, num, n, c=0, pos;
	printf("Enter the array size : ");
	scanf("%d",&n);
	printf("Enter Array Elements : ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&DATA[i]);
	}
	printf("Enter the number to be search : ");
	scanf("%d",&num);
	for(i=0; i<n; i++)
	{
		if(DATA[i]==num)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		printf("Item is not in the array DATA ");
	}
	else
	{
		printf("%d found at location %d\n",num, pos);
	}

}

