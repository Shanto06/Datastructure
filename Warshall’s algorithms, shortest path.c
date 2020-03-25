#include<stdio.h>
int main()
{
    int i,j,k,array[10][10],m,n;
    printf("Enter the value m & n: ");
    scanf("%d%d",&m,&n);
    printf("Enter the value of Q0: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }

    for(k=0;k<m;k++)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                array[i][j]=(array[i][j]<(array[i][k]+array[k][j]))?array[i][j]:array[i][k]+array[k][j];
            }
        }
    }

     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }


    return 0;
}
