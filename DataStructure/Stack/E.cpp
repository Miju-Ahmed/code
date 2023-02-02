#include<bits/stdc++.h>
using namespace std;

int top = -1;
int stack[100];
char value[100];

void push(char item)
{
    if(top>100)
        cout<<"Stack over flow."<<endl;
        return;
    else
    {
        top = top + 1;
        stack[top] = item;
    }
}

int pop()
{
    char temp;
    if(top<0)
        cout<<"Stack under flow"<<endl;
        return;
    else
    {
        temp = stack[top];
        top = top -1;
    }
    return temp;
}

int Evaluate()
{
    int a,b,i=0;
    while (value[i]!='\0')
    {
        if(isdigit(value[i]))
        {
            while (value[i]!=',')
            {
                
            }
            
        }
        
        
        i++;
    }
    
}

int main()
{
    cout<<"Enter the value of stack: ";
    cin>>value;
    Evaluate();

    return 0;
}