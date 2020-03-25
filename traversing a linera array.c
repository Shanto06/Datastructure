#include<stdio.h>
int main()
{
    int list[100],n,i;
    scanf("%d",&n);
    printf("the array element:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        printf("\n list[%d]=%d",i,list[i]);
    }



    return 0;
}
