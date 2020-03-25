#include<stdio.h>

int main()
{
    int i,p;
    double n;
    //for(i=1;i<=4;i++)
    //{
        scanf("%lf",&n);
        if(n>=0)
            p=n+.5;
        else
            p=n-.5;
            printf("%lf %d\n",n,(int)p);


    return 0;
}
