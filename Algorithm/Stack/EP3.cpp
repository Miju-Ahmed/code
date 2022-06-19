#include<bits/stdc++.h>
using namespace std;


int isOperator(char ch)
{
    if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/' || ch == '^')
        return 1;
    return -1;
}

float Operation(int a, int b, char x)
{
    int ans=0;
    switch (x)
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

float postEval(string post)
{
    int a, b, ans = 0;
    stack<float>stk;
    stk.push('#');

    string::iterator it;
    for(it = post.begin(); it!=post.end(); it++)
    {
        if(isalnum(char(*it)))
            stk.push(*it);
        else if(isOperator(*it)!=-1)
        {
            a = stk.top();
            stk.pop();
            b = stk.top();
            stk.pop();
            stk.push(Operation(a,b,*it));
        }
    }
    return stk.top();
}

int main()
{
    string post;
    cin>>post;
    cout<<postEval(post)<<endl;
    return 0;
}