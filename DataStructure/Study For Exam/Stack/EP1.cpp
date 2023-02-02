#include<bits/stdc++.h>
using namespace std;

double isOperator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
        return 1;
    return -1;
}

double Operation(int a, int b, char ch)
{
    switch (ch)
    {
    case '+':
        return a+b;
        break;
    case '-':
    return b-a;
    break;
    case '*':
    return a*b;
    case '/':
    return b/a;
    case '^':
    return pow(b,a);    
    default:
        break;
    }
    return INT_MIN;
}

double isOperand(char ch)
{
    if(ch>='0'&&ch<='9')    return 1;
    return -1;
}

double scanNum(char ch)
{
    int value;
    value = ch;
    return float(value - '0');
}

double Eval(string s)
{
    int a,b;
    stack<float>stk;
    string::iterator it;

    for(it=s.begin(); it!=s.end(); it++)
    {
        if(isOperator(*it)!=-1)
        {
            a = stk.top(); stk.pop();
            b = stk.top(); stk.pop();
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
    cin>>s;
    cout<<"Eval: "<<Eval(s)<<endl;
}