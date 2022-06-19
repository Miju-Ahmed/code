#include<bits/stdc++.h>
using namespace std;

float scanNum(char ch)
{
    int value;
    value = ch;
    return float(value - '0');
}
int isOperator(char ch)
{
    if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/' || ch == '^')
        return 1;
    return -1;
}

int isOperand(char ch)
{
    if(ch>='0'&& ch<='9')
    {
        return 1;
    }
    return -1;
}

float operation(int a, int b, char op)
{
    float ans=0;
    switch (op)
    {
    case '+':
        ans = b+a;
        break;
    case '-':
        ans = b-a;
        break;
    case '*':
        ans = b*a;
        break;
    case '/':
        ans = b/a;
        break;
    case '^':
        ans = pow(b,a);
        break;    
    default:
        break;
    }
    return ans;
}

float postfixEval(string postfix)
{
    int a,b;
    stack<float>stk;
    string::iterator it;
    for(it=postfix.begin(); it!=postfix.end(); it++)
    {
        if(isOperator(*it)!=-1)
        {
            a = stk.top();
            stk.pop();
            b = stk.top();
            stk.pop();
            stk.push(operation(a,b,*it));
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
    string post;
    cin>>post;
    cout<<"The result is : "<<postfixEval(post)<<endl;
    return 0;
}