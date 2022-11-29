#include<bits/stdc++.h>
using namespace std;

int preced(char ch)
{
    if(ch=='+'||ch=='-')    return 1;
    else if(ch=='*'||ch=='/')   return 2;
    else if(ch=='^')    return 3;
    else    return 0;
}

string InToPost(string s)
{
    stack<char>stk;
    string p = "";
    stk.push('#');
    string::iterator it;

    for(it=s.begin(); it!=s.end(); it++)
    {
        if(isalnum(char(*it)))
            p+=*it;
        else if(*it=='(')
            stk.push('(');
        else if(*it=='^')
            stk.push('^');
        else if(*it==')')
        {
            while(stk.top()!='#'&&stk.top()!='(')
            {
                p+=stk.top();
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
                while(stk.top()!='#'&&preced(*it)<=preced(stk.top()))
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
        p+=stk.top();
        stk.pop();
    }

    return p;
}

double isOperator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
        return 1;
    return -1;
}

double Operation(int a, int b, char ch)
{
    if(ch=='+') return a+b;
    if(ch=='-') return b-a;
    if(ch=='*') return a*b;
    if(ch=='/') return b/a;
    if(ch=='^') return pow(b,a);
    return INT16_MIN;
}

double isOperand(char ch)
{
    if(ch>=0&&ch<='9')  return 1;
    return -1;
}

double scanNum(char ch)
{
    double value =ch;
    return double(value - '0');
}

double Eval(string s)
{
    stack<double>stk;
    int a, b;
    string::iterator it;
    for(it = s.begin(); it!=s.end(); it++)
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
    cout<<"Infix: "<<s<<endl;
    string s1 = InToPost(s);
    cout<<"Postfix: "<<s1<<endl;
    
    cout<<"Evaluate: "<<Eval(s1)<<endl;
}