#include<bits/stdc++.h>
using namespace std;
void isprime(int num)
{
    if(num<2)
        printf("no");
    for(long long i=1;i*i<=num;i++)
    {
        if(num%i==0)
        {
            printf("no");
        }
    }
    printf("yes");
}

int main()
{
   long long n;
   scanf("%d",&n);
   isprime(n);



    return 0;
}
