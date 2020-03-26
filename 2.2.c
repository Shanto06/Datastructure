/// Quadratic Equation

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x,R1,R2;
    printf("Enter element a b c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    x=b*b-4*a*c;
    if(a==0)
    {
        printf("NO REAL SOLUTIONS\n");
    }
    else if(x<0)
    {
        printf("NO REAL SOLUTIONS\n");
    }
    else
    {
        R1=(-b+sqrt(x))/(2*a);
        R2=(-b-sqrt(x))/(2*a);

        printf("The solution R1 = %.0lf\n",R1);
        printf("The solution R2 = %.0lf\n",R2);
    }
    return 0;
}
