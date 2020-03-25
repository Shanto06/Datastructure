#include<stdio.h>

int main()
{
    double sum,i;
    int n;
    scanf("%d",&n);
     sum=0;
    for(i=1;i<=n;i++)
    {

        sum=sum+1/i;
    }
    printf("%lf\n",sum);
    return 0;
}
