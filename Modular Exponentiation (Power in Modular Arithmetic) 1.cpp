#include<bits/stdc++.h>

using namespace std;

using ll=long long;

int pow(ll a,ll b,int m)
{
    int x;
    if(b==1)
        return a%m;
    if(b%1)

        return ((pow(a,b-1,m)*a)%m);
    else
    {
        x=pow(a,b/2,m);
        x=(x*x)%m;

    }
    return x;

}

int main()
{
    ll a,b,m;
    cin>>a>>b>>m;
   cout<< pow(a,b,m)<<endl;
}
