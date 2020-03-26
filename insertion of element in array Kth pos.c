#include<stdio.h>
int main()
{
    int array[100],position,element,i,n;
    printf("Element no. of array: ");
    scanf("%d",&n);
    printf("Enter %d integer element: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Input array element: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    printf("Enter the element to be insert: ");
    scanf("%d",&element);
    printf("Enter the position: ");
    scanf("%d",&position);

    for( i=n-1;position<=i;i--)
    {
        array[i+1]=array[i];
    }
    array[position]=element;
    printf("After insertion : ");
    for(i=0;i<n;i++)
    {
       printf("%d ",array[i]);
    }
    printf("\n");

    return 0;
}
