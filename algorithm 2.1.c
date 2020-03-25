#include<stdio.h>
int main()
{
    int n,i,a[100],max=0,LOC;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)

            max=a[i];
            LOC=i+1;
    }
    printf("the maximum value %d and Location: %d\n",max,LOC);


    return 0;
}

