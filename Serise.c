#include<stdio.h>

int main()
{
    double n,i,sum;

    printf("Enter the value of n:");
    while( scanf("%lf",&n)!=EOF)
    {
         sum=0;
    for(i=1;i<=n;i++)
    {

        if(i==1)
            printf("\n1+");
        else if(i==n)
            printf("1/%.0lf",i);
        else
            printf("(1/%.0lf)+",i);

            sum=sum+1/i;
    }
            printf("\n\nThe sum of serise is %.3lf\n\n",sum);
    }
    return 0;
}
