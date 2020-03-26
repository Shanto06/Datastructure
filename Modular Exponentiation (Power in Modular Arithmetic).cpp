
#include<bits/stdc++.h>

using namespace std;

int power(int a, unsigned int b, int m)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=((ans%m)*(a%m))%m;
    }
    return ans;

}
int main()
{

    int x,p,m,c;
    unsigned y;
    cin>>x>>y>>p;
    c=power(x,y,p);
     cout<<c<<endl;


}
