#include<stdio.h>
int main()
{
    int A[100],i,n,x;
    scanf("%d",&x);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<n;i++)
    {
        if(A[i]==x)

            printf("LOC is the location of ITEM\n");

        else

           printf("ITEM is not in the array DATA\n");


    }


    return 0;
}
