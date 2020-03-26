#include<stdio.h>
int main()
{
    int array[1000],i,j,value,position,k,n;

    printf("Enter the element of array: \n");
    scanf("%d",&n);

    printf("Enter %d element\n",n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the location where you to wish insert the value: \n");
    scanf("%d",&position);

    printf("Enter the value to insert: \n");
    scanf("%d",&value);

    for(j=n-1;j>=position-1;j--)
    {
        array[j+1]=array[j];
    }
    array[position-1]=value;

    for(k=0;k<=n;k++)
    {
        printf("%d\n",array[k]);
    }


    return 0;
}
