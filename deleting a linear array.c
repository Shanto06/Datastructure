#include<stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i,pos,size,k;

    printf("size of the array: \n");
    scanf("%d",&size);
    printf("Enter element of array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position of element to delete: \n");
    scanf("%d",&pos);

    if(pos<0 || pos>size)
    {
        printf("Invalid position! please enter position between 1 to %d",size);
    }
    else
    {
        for(i=pos-1;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }

    printf("List After Delete: ");
     for(k=0;k<size;k++)
    {
        printf("%d",arr[k]);
    }
    printf("\n");



    return 0;
}

