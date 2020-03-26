#include<bits/stdc++.h>

using namespace std;

int countdyckpath(unsigned int n)
{
    int res=1;
    for(int i=0;i<n;i++)
    {
        res*=(2*n-i);
        res/=(i+1);
    }
    return res/(n+1);
}

int main()
{
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    cout<<"The number of Dyck path is: "<<endl;
    cout<<countdyckpath(num)<<endl;



}
