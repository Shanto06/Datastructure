#include<stdio.h>
int main()
{
    int a,b,ans;
    printf("Enter a number a: ");
    scanf("%d",&a);

    printf("Enter a number b: ");
    scanf("%d",&b);

    printf("The output of XOR gate: ");
    ans = (!a && b || a && (!b));
    printf("%d\n",ans);

    return 0;
}
