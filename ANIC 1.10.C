
#include<stdio.h>
#include<math.h>
int main()
{

    int a,b,c;
    double A,s;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2;
    A = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%lf\n",A);
    return 0;
}


