#include<bits/stdc++.h>
using namespace std;
unsigned long int binomialcff(unsigned int n,unsigned int k)
{
    unsigned long int res=1;
    if(k>n-k)
        k=n-k;
    for(int i=0;i<k;i++)
    {
        res*=(n-i);
        res/=(i+1);
    }
    return res;
}
unsigned long int catalan(unsigned int n)
{
    unsigned long int c=binomialcff(2*n,n);
    return c/(n+1);
}

unsigned long int  findWays(int n)
{
    if(n&1)
        return 0;
    return catalan(n/2);
}

int main()
{
    int num;
    cin>>num;
    cout<< findWays(num)<<endl;


}
