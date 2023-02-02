#include<bits/stdc++.h>
using namespace std;
stack<char>stk;

string infToPost(string infix)
{
    string postfix = "";
    stk.push('#');
    string::iterator it;
    for(it = infix.begin(); it!=infix.end(); it++)
    {
        if(isalnum(char((*it)))
        {
            postfix += *it;
        }
        else if(*it=='(')
            stk.push(*it);
        else if(*it == '^')
            stk.push(*it);
        else if(*it==')')
        {
            while (stk.top()!='#'&&stk.top()!='(')
            {
                
            }
            
        }
    }
}