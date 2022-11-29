#include<bits/stdc++.h>
using namespace std;

int preced(char ch)
{
    if(ch=='+'||ch=='-')    return 1;
    else if(ch=='*'||ch=='/')   return 2;
    else if(ch=='^')    return 3;
    else    return 0;
}

string inToPos(string s)
{
    stack<char>stk;
    stk.push('#');
    string p="";
    string::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        if(isalnum(char(*it)))  p+=*it;
        else if(*it=='(')   stk.push('(');
        else if(*it=='^')   stk.push('^');
        else if(*it==')')
        {
            while(stk.top()!='#'&& stk.top()!='(')
            {
                p+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else
        {
            if(preced(*it)>preced(stk.top()))   stk.push(*it);
            else if(preced(*it)<=preced(stk.top()))
            {
                while(stk.top()!='#'&&preced(*it)<=preced(stk.top()))
                {
                    p+=stk.top();
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

string inToPre(string s)
{
    reverse(s.begin(), s.end());
    int l = s.size();
    for(int i=0; i<l; i++)
    {
        if(s[i]=='(')   s[i]=')';
        else if(s[i]==')') s[i]='(';
    }
    string prefix = inToPos(s);
    reverse(prefix.begin(), prefix.end());
    return prefix;
}

int main()
{
    string s = "x^y/(5*z)+2";
    cout<<"Infix: "<<s<<endl;
    cout<<"Postfix: "<<inToPos(s)<<endl;
    cout<<"Prefix: "<<inToPre(s)<<endl;
    return 0;
}