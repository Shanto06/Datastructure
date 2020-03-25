#include<stdio.h>

int main()
{
   int x,y,z,temp;
   x=1,y=2,z=3;
   temp=x;
   x=y;
   y=z;
   z=temp;
   printf("%d %d %d\n",x,y,z);

    return 0;
}

