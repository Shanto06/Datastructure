#include<stdio.h>
int main()
{
    int n,i,array[100];
    printf("Enter array length: ");
    scanf("%d",&n);
    printf("Enter %d element: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The array after traversing:\n");
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("array[%d]=%d\n",i,array[i]);
    }
    printf("\n");

    return 0;
}

