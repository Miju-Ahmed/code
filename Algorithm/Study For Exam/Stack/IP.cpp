#include<bits/stdc++.h>
using namespace std;

int preced(char ch)
{
    if(ch=='+'||ch=='-')    return 1;
    else if(ch=='*'||ch=='/') return 2;
    else if(ch=='^')    return 3;
    else    return 0;

}

string inToPos(string s)
{
    stack<char> stk;
    stk.push('#');
    string p = "";
    string::iterator it;
    for(it=s.begin(); it!=s.end(); it++)
    {
        if(isalnum(char(*it)))
            p += *it;
        else if(*it=='(')
            stk.push('(');
        else if(*it=='^')
            stk.push('^');
        else if(*it==')')
        {
            while(stk.top()!='#' && stk.top()!='(')
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
                while(stk.top()!='#'&& preced(*it)<=preced(stk.top()))
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
    return p;
}

int main()
{
    string s;
    cin>>s;
    cout<<"Postfix: "<<inToPos(s)<<endl;
    return 0;
}