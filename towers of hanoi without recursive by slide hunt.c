#include<stdio.h>
void tower(int n,char sou,char aux,char des);
int main()
{
    int n;
    printf("Enter the no of disks: ");
    scanf("%d",&n);
    tower(n,'S','A','D');


    return 0;
}

void tower(int n,char sou,char aux,char des)
{
    if(n==1)
        printf("move from tower %c to tower %c\n",sou,des);
    else
    {
        tower(n-1,sou,des,aux);
        tower(1,sou,aux,des);
        tower(n-1,aux,sou,des);
    }

}
