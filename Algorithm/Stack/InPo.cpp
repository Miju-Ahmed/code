#include<bits/stdc++.h>
using namespace std;

int isOperator(char x)
{
    if(x=='*'||x=='+'||x=='-'||x=='/'||x=='^')
        return 1;
    return 0;
}

int Prec(char x)
{
    if(x=='+'||x=='-')
        return 1;
    else if(x=='*'||x=='/')
        return 2;
    else if(x=='^')
        return 3;
    return 0;

}


string InfixToPostfix(string Infix)
{
    string Postfix;
    stack<char>stk;
    for(int i=Infix.begin(); i!=Infix.end(); i++)
    {
        if(isalnum(char(Infix[i])))
        {
            Postfix += Infix[i];
        }
        else if(isOperator(Infix[i]))
        {
            stk.push(Infix[i]);
        }
        else if(Infix[i]=='(')
        {
            stk.push(Infix[i]);
        }
        else if(Infix[i]==')')
        {
            
        }
    }
}

int main()
{
    string Infix;
    cin>>Infix;
    string Post = InfixtoPostfix(Infix);
    cout<<Post<<endl;
}