#include<stdio.h>

int main()
{
    int a,b,n,i,c;
        printf("Enter anumber: ");
        scanf("%d",&n);
         a=0,b=1;
         printf("Fibonacci Sequence: ");
        for(i=1;i<=n;i++)
        {

            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
        }
        printf("\n");

    return 0;
}

