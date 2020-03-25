#include<iostream>
using namespace std;
#define size 10
class stack{
    char stck[size];
    int top;
public:
   void init();///initial stack
    void push(char ch);///push characters on the stack
    char pop();///pop character from stack
};
///initial stack
void stack::init()
{
    top=0;
}
///push a characters
void stack::push(char ch)
{
    if(top==size)
       {
            cout<<"Stack is full"<<endl;
            return;
       }
           stck[top]=ch;
           top++;
}
///pop a character

char stack::pop()
{
    if(top==0)
    {
        cout<<"Stack is empty"<<endl;
        return 0;
    }
    top--;
    return stck[top];
}
int main()
{
    stack s1,s2;/// create two stack
    int i;
    ///initialize the stack
    s1.init();
    s2.init();

    s1.push('a');
    s2.push('b');
    s1.push('c');
    s2.push('x');
    s1.push('w');
    s2.push('p');
    for(i=0;i<3;i++)
    cout<<"pop s1: "<<s1.pop()<<endl;

     for(i=0;i<3;i++)
    cout<<"pop s2: "<<s2.pop()<<endl;

    return 0;
}
