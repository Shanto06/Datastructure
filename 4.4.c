/// c program to Babble sort

#include<stdio.h>
int main()
{
    int i,j,k,n,temp,p;
    printf("The number of element array: ");
    scanf("%d",&n);
    int arr[n+1];
    for(k=0;k<n;k++)
    {
        scanf("%d",&arr[k]);
    }
    printf("The array element:");
    for(k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }
    printf("\n\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }


     printf("Sorted array: ");
    for(p=0;p<n;p++)
    {
        printf("%d ",arr[p]);
    }

    printf("\n");

    return 0;
}

