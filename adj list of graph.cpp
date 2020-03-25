#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec[3];
    vec[0].push_back(10);
    vec[0].push_back(20);
    vec[2].push_back(30);


    for(int i=0;i<vec[0].size();i++)
    {
        printf("%d\n",vec[0][i]);
    }

}
