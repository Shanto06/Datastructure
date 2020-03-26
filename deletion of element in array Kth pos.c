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

    printf("Enter the element to be deleted: ");
    scanf("%d",&element);
    printf("Enter the position: ");
    scanf("%d",&position);
     i=position+1;
    while(i<=n-1)
    {
        array[i-1]=array[i];
        i++;
    }
    n--;
    printf("After insertion : ");
    for(i=0;i<n;i++)
    {
       printf("%d ",array[i]);
    }
    printf("\n");

    return 0;
}
