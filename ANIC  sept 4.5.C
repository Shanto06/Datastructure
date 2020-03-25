#include<stdio.h>

int main()
{
    int a,b,n,p,c;
    scanf("%d%d",&a,&b);
    p=b/10;
    c=b%10;
    printf("\t\t%d\n",a);
    printf("\t*\t%d\n",b);
    printf("\t----------\n");
    printf("%d*%d is\t\t%d\n",c,a,c*a);
    printf("%d*%d is\t\t%d\n",p,a,p*a);
    printf("\t----------\n");
    printf("Add them\t%d\n",a*b);
    printf("\t----------\n");
    return 0;
}
