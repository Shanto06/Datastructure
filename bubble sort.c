#include<stdio.h>
int bubble_sort(int A[],int n)
{
     int i,j,temp;

     for(i=0;i<n;i++)
     {
         for(j=0;j<n-i-1;j++)
         {
             if(A[j]>A[j+1])
             {
                 temp=A[j];
                 A[j]=A[j+1];
                 A[j+1]=temp;
             }
         }
     }
}
int main()
{
    int A[1000],i,n,k;
    printf("the element of the array: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    bubble_sort(A,n);

    for(k=0;k<n;k++)
    {
        printf("%d\n",A[k]);
    }



    return 0;
}
