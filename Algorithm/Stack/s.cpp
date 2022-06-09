#include<bits/stdc++.h>
using namespace std;
int stack[3];
int top = -1;


void push1(int x)
{
    if(top>=3)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        top = top + 1;
        stack[top] = x;
        cout<<"Input "<<x<<" is successful"<<endl;
    }
}

int pop1()
{
    if(top>=0)
    {
        return stack[top];
        top = top -1;
    }
    else
    {
        cout<<"Stack Underflow"<<endl;
    }
    return -1;
}

int peek1()
{

    return -1;
}

void print1()
{
    for(int i=0; i<=top; i++)
    {
        cout<<stack[top]<<" ";
    }
    cout<<endl;
}

int main()
{
    push1(20);
    push1(500);
    push1(-100);
    push1(142);
    print();
    int x;
    x = pop1(stack);
    cout<<x<<endl;
    x = pop1(stack);
    cout<<x<<endl;
    print(stack);
    
    return 0;
}