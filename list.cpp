#include<bits/stdc++.h>
#include<stdio.h>
#include<list>
#include<iterator>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>

using namespace std;

int main()
{
    int ar[5]={5,7,8,1,2};
    list<int>mylist (ar,ar+5);
    list<int>::iterator it;

        mylist.pop_front();
        mylist.pop_back();
        mylist.pop_front();

        for(it=mylist.begin();it!=mylist.end();it++)
        {
            cout<<*it<<"\t";
        }
            cout<<endl;




//    list<int>::iterator it;
//    it=find(mylist.begin(),mylist.end(),7);
//    mylist.erase(it);



//    if(it==mylist.end())
//        cout<<"not found"<<endl;
//    else
//        cout<<"found"<<endl;



//    cout<<*it<<endl;
//    mylist.insert(it,100);

//


    return 0;
}
