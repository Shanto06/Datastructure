#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x,R1,R2;
    scanf("%lf%lf%lf",&a,&b,&c);
    x=b*b-4*a*c;
    if(a==0)
    {
        printf("Impossivel calcular\n");
    }

    else if(x<0)
    {
        printf("Impossivel calcular\n");
    }


    else
    {
        R1=(-b+sqrt(x))/(2*a);
        R2=(-b-sqrt(x))/(2*a);

        printf("R1 = %lf\n",R1);
        printf("R2 = %lf\n",R2);
    }
    return 0;
}
