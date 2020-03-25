#include<bits/stdc++.h>
#include<cstring>
#include<stack>
using namespace std;

int main()
{
    stack<string>s;

    s.push("shanto");
    s.push("shanto1");
    s.push("shanto2");

        while(!s.empty())
        {
            string x;
            x=s.top();
            cout<<x<<endl;
            s.pop();
        }

    return 0;
}
