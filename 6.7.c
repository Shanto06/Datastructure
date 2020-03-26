//another way
#include<stdio.h>

int main()
{
    int a,b,n,fact;
    printf("Enter the number: ");
    scanf("%d",&n);
    {
        fact=1;
        while(n>1)
        {
            fact=fact*n;
            n--;
        }
        printf("%d\n",fact);
    }
    return 0;
}


