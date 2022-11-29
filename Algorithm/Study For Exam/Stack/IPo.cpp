#include<bits/stdc++.h>
using namespace std;

float isOperator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
        return 1;
    return 1;
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
            stk.push(scanNum(*it));
    }
    return stk.top();
}

int preced(char ch)
{
    if(ch=='+'||ch=='-')
        return 1;
    else if(ch=='*'||ch=='/')
        return 2;
    else if(ch=='^')
        return 3;
    else
        return 0;
}

string infixtopost(string s)
{
    stack<char>stk;
    stk.push('#');
    string p="";
    string::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        if(isalnum(char(*it)))
            p+=*it;
        else if(*it == '(')
            stk.push('(');
        else if(*it=='^')
            stk.push('^');
        else if(*it==')')
        {
            while(stk.top()!='#'&&stk.top()!='(')
            {
                p += stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else
        {
            if(preced(*it)>preced(stk.top()))
                stk.push(*it);
            else
            {
                while(stk.top()!='#'&&(preced(*it)<=preced(stk.top())))
                {
                    p += stk.top();
                    stk.pop();
                }
                stk.push(*it);
            }
        }
    }

    while(stk.top()!='#')
    {
        p += stk.top();
        stk.pop();
    }
    cout<<p<<endl;
    return p;
}

int main()
{
    string s;
    cin>>s;
    cout<<"Infix: "<<s<<endl;

    string s1 = infixtopost(s);
    cout<<"Postfix: " <<s1<<endl;

    float x = postEval(s1);
    return 0;
}