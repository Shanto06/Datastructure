#include<stdio.h>
int linear_search(int A[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]==x)
        {
            return i;
        }
    }
    i=-1;
    return i;
}

int main()
{
    int A[100],n,x,get,i;
    printf("the element array: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("search value: \n");
    scanf("%d",&x);

    get= linear_search(A,n,x);
    printf("LOC =%d value =%d\n",(get),x);
    return 0;
}
