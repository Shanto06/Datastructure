#include<stdio.h>
int binary_search(int A[],int n,int x)
{
    int left,right,mid,i,j;
    left=0;
    right=n-1;
    while(left<=right)
    {
        mid=(left+right)/2;

        if(A[mid]==x)
        {
            return mid;
        }
        else if(A[mid]<x)
        {
            left=mid+1;
        }

        else
        {
            right=mid-1;
        }
    }
    return -1;
}

int main()
{
    int A[1000],i,n,x,m;
    scanf("%d",&x);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    m=binary_search(A,n,x);

    printf("LOC =%d VALUE=%d\n",(m+1),x);
}
