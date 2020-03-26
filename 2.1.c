
#include<stdio.h>
int main()
{
    int data[100],loc=1 ,n, k ,i,j,max;
     printf("ENTER THE ARREY LENGTH: ");
     scanf("%d",&n);
     printf("Enter %d value: ",n);
     for(k=0;k<n;k++)
        {
            scanf("%d",&data[k]);
        }
     max=data[0];
    for(k=1;k<n;k++)
    {
        if(max<data[k])
        {
            max=data[k];
            loc=k+1;
        }
    }
    printf("The location is =%d and Max value is =%d \n",loc,max);
    return 0;
}
