#include<stdio.h>
int main()
{
    long int a,b,c,d=0;
    scanf("%ld",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        d=d*10+b;
    }
    printf("%ld",d);
    return 0;
}
