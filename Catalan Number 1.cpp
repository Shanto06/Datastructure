
#include<bits/stdc++.h>
using namespace std;


unsigned long int catalan(unsigned n)
{
    unsigned long int res=0;
    if(n<=1)
        return 1;
    for(int i=0;i<n;i++)
    {
        res+=catalan(i)*catalan(n-i-1);
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    /// cout<<catalan(n)<<endl;

   for(int i=0;i<n;i++)
   {
        cout<<catalan(i)<<" ";
   }
}





