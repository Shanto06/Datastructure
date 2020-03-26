#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int partition(int array[],int p,int r)
{
    int i,j,x,tmp;
    x=array[r];
    i=p-1;
    for(j=p;j<=r;j++)
    {
        if(array[j]<x)
        {
            i++;

            tmp=array[i];
            array[i]=array[j];
            array[j]=tmp;
        }
    }

    i++;
    tmp=array[i];
    array[i]=array[r];
    array[r]=tmp;

    return i;

}
int quicksort(int array[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=partition(array,p,r);

        quicksort(array,p,q-1);
        quicksort(array,q+1,r);


    }
}

int main()
{
    int i,n;
    int array[100];

   printf("The number of element: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }

    printf("Final array: ");

    quicksort(array,0,n-1);

    for(i=0;i<n;i++)
    {
        printf(" %d ",array[i]);
    }
}

