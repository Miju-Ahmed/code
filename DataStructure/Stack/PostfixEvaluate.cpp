#include<bits/stdc++.h>
using namespace std;

void push()
{

}

int pop()
{
    return 0;
}

int priority(char x)
{

}

int main()
{
    char p[100];
    int a,b;
    cout<<"Enter the postfix : ";
    cin>>p;
    for(int i=0; p[i]!='\0'; i++)
    {
        switch (p[i])
        {
        case '*':
            r = a*b;
            break;
        case '/':
            r = a/b;
        case '+':
            r = a+b;
        
        default:
            break;
        }
        if(p[i]=='*'||p[i]=='/'||p[i]=='+'||p[i]=='-')
        {
            a = (p[i-2] - '48');
            pop();
            b = (p[i-1] - '48');
            pop();
            r = 
        }
    }
    
}