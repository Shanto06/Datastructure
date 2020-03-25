#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;

int main()
{
    queue<int>p;
    p.push(1);
    p.push(10);
    p.push(4);
    p.push(3);



    while(!p.empty())
    {
         int x;
        x=p.front();
        printf("%d ",x);
        p.pop();
    }

    return 0;
}
