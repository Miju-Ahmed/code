#include<bits/stdc++.h>
using namespace std;

int Prec(char x)
{
    if(x == '+' || x == '-')
         return 1;
    else if(x == '*' || x=='/')
        return 2;
    else if(x=='^')
        return 3;
    return 0;
}

string InfixToPostfix(string infix)
{
    stack<char> stk;
    stk.push('#');
    string postfix = "";
    string:: iterator it;

    for(it = infix.begin(); it!=infix.end(); it++)
    {
        if(isalnum(char(*it)))
        {
            postfix += *it;
        }
        else if(*it == '(')
            stk.push('(');
        else if(*it == '^')
            stk.push('^');
        else if(*it==')')
        {
            while (stk.top()!='#'&& stk.top()!='(')
            {
                postfix += stk.top();
                stk.pop();
            }

            stk.push(*it);
            
        }
        else
        {
            if(Prec(*it)>Prec(stk.top()))
                stk.push(*it);
            while(stk.top()!='#'&& Prec(*it)<=Prec(stk.top()))
            {
                postfix += stk.top();
                stk.pop();
            }
            stk.push(*it);
        }
    }

    while(stk.top()!='#')
    {
        postfix += stk.top();
        stk.pop();
    }

    return postfix;
}



int main()
{
    string infix = "x^y/(5*z)+2";
    cout<<"Postfix form is "<<InfixToPostfix(infix)<<endl;
    return 0;
}