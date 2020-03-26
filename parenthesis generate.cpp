#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;
#define MAX 100
void printparenthesis(int n);
void _printparenthesis(int index,int close,int open,int n);

void printparenthesis(int n)
{
    if(n>0)
        _printparenthesis(0,0,0,n);
    return;
}
void _printparenthesis(int index,int close,int open,int n)
{
    static char str[MAX];
    if(close==n)
    {
       printf("%s\n",str);
       return;
    }
    else
    {
        if(open>close)
        {

            str[index]='}';
            _printparenthesis(index+1,close+1,open,n);
        }
        if(open<n)
        {
            str[index]='{';
             _printparenthesis(index+1,close,open+1,n);
        }
    }
}



int main()
{
    int n;
    cin>>n;
    //printf("[\"");
    printparenthesis(n);

    return 0;
}
