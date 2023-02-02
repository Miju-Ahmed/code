#include<bits/stdc++.h>
using namespace std;

float isOperator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
        return 1;
    return -1;
}

float Operation(int a, int b, char ch)
{
    switch (ch)
    {
    case '+':
        return a+b;
    case '-':
        return b-a;
        break;
    case '*':
        return b*a;
    case '/':
        return b/a;
    case '^':
        return pow(b,a);
    
    default:
        break;
    }
    return INT_MIN;
}

float isOperand(char ch)
{
    if(ch>='0'&&ch<='9')    return 1;
    return -1;
}

float scanNum(char ch)
{
    int value;
    value = ch;
    return float(value - '0');
}

float postEval(string s)
{
    int a, b;
    stack<float>stk;
    string::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        if(isOperator(*it)!=-1)
        {
            a = stk.top();
            stk.pop();
            b = stk.top();
            stk.pop();
            stk.push(Operation(a,b,*it));
        }
        else if(isOperand(*it)>0)
        {
            stk.push(scanNum(*it));
        }
    }
    return stk.top();
}

int main()
{
    string s;
    s = "ab*2c^/-";
    char d,e,f;
    cout<<"Enter the value of a : ";
    cin>>d;
    cout<<"Enter the value of b: ";
    cin>>e;
    cout<<"Enter the value of c: ";
    cin>>f;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a')
            s[i] = d;
        else if(s[i]=='b')
            s[i] = e;
        else if(s[i]=='c')
            s[i] = f;
    }
    //cout<<"Infix: "<<s<<endl;
    cout<<"Postfix Evaluate: "<<postEval(s)<<endl;
    return 0;
}