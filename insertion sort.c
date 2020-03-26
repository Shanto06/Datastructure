#include<stdio.h>
int insertion_sort(int A[],int n)
{
    int i,j,item;
    for(i=1;i<n;i++)
    {
        item=A[i];
        j=i-1;
        while(j>=0 && A[j]>item)
        {
            A[j+1]=A[j];
            j=j-1;
        }

        A[j+1]=item;
    }

}
int main()
{
    int A[1000],i,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    insertion_sort(A,n);

    for(k=0;k<n;k++)
    {
        printf("%d\n",A[k]);
    }

    return 0;
}
