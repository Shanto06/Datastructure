#include<stdio.h>

int main()
{
    int a,b,c,x;
    scanf("%d",&x);
    a=x%1000;
    b=x%100;
    c=x%10;
    printf("%d\n",x);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
}
