#include<bits/stdc++.h>
using namespace std;

float isOperator(char ch)
{
    if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/' || ch == '^')
      return 1;
   return -1;
}

float Operation(int a, int b, char op)
{
    if(op == '+')
      return b+a;
   else if(op == '-')
      return b-a;
   else if(op == '*')
      return b*a;
   else if(op == '/')
      return b/a;
   else if(op == '^')
      return pow(b,a);
   else
      return INT_MIN; 
}

float isOperand(char ch)
{
    if(ch >= '0' && ch <= '9')
      return 1;
   return -1;
}

float scanNum(char ch)
{
    int value = ch;
    return float(value - '0');
}

float pos(string s)
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
        else if(isOperand(*it))
        {
            stk.push(scanNum(*it));
        }
    }
    return stk.top();
}

int main()
{
    string p;
    cin>>p;
    for(int i=0; i<p.size(); i++)
    {
        if(p[i]=='a')
            p[i] = '3';
        else if(p[i]=='b')
            p[i]='2';
        else if(p[i]=='c')
            p[i]='1';
    }
    cout<<"The result: "<<pos(p)<<endl;
    return 0;
}