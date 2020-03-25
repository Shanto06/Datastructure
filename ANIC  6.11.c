
/**

#include<stdio.h>
int main()
{
    int a,b[10],i,j,digit,count;
    scanf("%d",&a);
    count=0;
    while(a!=0)
    {
        digit=a%2;
        a=a/2;
        b[count]=digit;
        count++;
    }

    for(i=count-1;i>=0;i--)
        printf("%d",b[i]);
    return 0;
}
*/



#include<stdio.h>
#include<conio.h>
void main()
{
        float i,n;
        float e1,e2;
        clrscr();
        printf("Enter No.");
        scanf("%f",&n);
        e2=1;
        e1=1;
        for(i=1;i<=n;i++)
        {
        e1=e1+((float)1/fact(i));
        if((e1-e2)<0.00001)
        break;
        e2=e1;
        }
        printf("The value of e is : %f",e1);
        getch();
}
