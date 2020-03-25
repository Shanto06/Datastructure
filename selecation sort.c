#include<stdio.h>
int selecation_sort(int A[],int n)
{

    int i,j,k,index_min,temp;

    for(i=0;i<n-1;i++)
    {
        index_min=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[index_min])
            {
                index_min=j;
            }

        }
        if(index_min!=i)
        {
            temp=A[i];
            A[i]=A[index_min];
            A[index_min]=temp;
        }
    }
}

int main()
{
    int A[1000],n,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&A[k]);
    }
    selecation_sort(A,n);

    for(k=0;k<n;k++)
    {
        printf("%d ",A[k]);
    }
    return 0;
}



