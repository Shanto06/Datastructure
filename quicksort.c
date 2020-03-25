#include<stdio.h>
int divide(int array[],int start,int end);
int sort(int array[],int start,int end);

int main()
{
    int i,size=9;
    int array[]={15,2,7,6,11,8,4,16,5};
    divide(array,0,9-1);
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
}

int divide(int array[],int start,int end)
{
    int pivot;
    if(start>=end)
    {
        return pivot;
    }
    else
    {
        pivot=sort(array,start,end);
        divide(array,start,pivot-1);
        divide(array,pivot+1,end);
    }
}

int sort(int array[],int start,int end)
{
    int i,j,start1,end1,pivot;
    int moveptr_right=1;
    pivot=array[start1];
    i=start1;
    j=end1;

    while(i<j)
    {
        if(moveptr_right)

        {
            if(array[j]<pivot)
            {
                array[i]=array[j];
                i++;
                moveptr_right=0;
            }
            else
            {
                 j--;
            }
        }
        else

        {
            if(array[j]>pivot)
            {
                array[j]=array[i];
                j--;
                moveptr_right=1;
            }
            else
            {
                 i++;
            }
        }
    }
    array[j]=pivot;
    return j;

}
