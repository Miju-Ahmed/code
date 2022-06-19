#include<bits/stdc++.h>
using namespace std;

int st[20];
int top=-1;

void push(char x)
{
    if(top>20)
    {
        cout<<"Stack over flow."<<endl;
    }
    else
    {
        top++;
        st[top] = x;
    }
}

int pop()
{
    if(top<0)
    {
        cout<<"Stack Under flow."<<endl;
    }
    else
    {
        int temp = st[top];
        top--;
        return temp;
    }
    return 0;
}

int Priority(char x)
{
    if(x=='(')
        return 0;
    else if(x=='+'||x=='-')
        return 1;
    else if(x=='*'||x=='/')
        return 2;
    return 0;
}

void InfixToPostfix(char *s)
{
    for(int i=0; s[i]!='\0'; i++)
    {
       if(isalnum(s[i]))
       {
           cout<<s[i]<<",";
       } 
       else if(s[i]=='(')
       {
           push(s[i]);
       }
       else if(s[i]==')')
       {
           while (s[i]!='(')
           {
               cout<<pop()<<",";
           }
           
       }
       else
       {
           while(Priority(st[top])>=Priority(s[i]))
           {
               cout<<pop()<<",";
           }
       }
    }
    while (top!=-1)
    {
        cout<<pop()<<",";
    }
    cout<<endl;
    
}

int main()
{
    char s[] = "1+2*5+(2-1)*7";
    InfixToPostfix(s);

}