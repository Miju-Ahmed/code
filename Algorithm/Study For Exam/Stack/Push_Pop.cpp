#include<bits/stdc++.h>
using namespace std;

#define MX 5
int st[MX];
int top=-1;

void Push(int x)
{
    if(top>MX){cout<<"Stack overflow.\n"; return;}
    top = top+1;
    st[top] = x;
}
int Pop()
{
    if(top<0){cout<<"Stack underflow.\n"; return -1;}
    int item = st[top];
    top = top-1;
    return item;
}

void Print()
{
    for(int i=0; i<=top; i++)
    {
        cout<<st[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Push(5);
    Push(10);
    Push(-4);
    cout<<"Print the data: ";
    Print();
    cout<<"\nPrint Popped data: "<<Pop()<<endl;
    Push(-78);
    Push(89);
    cout<<"\nPrint the data: ";
    Print();
    cout<<"\nPopped the data: "<<Pop()<<endl;
    return 0;
}