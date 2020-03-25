#include<stdio.h>
int main()
{
    int m=0;
    do
    {
    if(m>0)
        continue;
    m=m+10;
    }
    while(m<50);
    printf("%d",m);
    return 0;
}
