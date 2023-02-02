#include<bits/stdc++.h>
using namespace std;

int isOperator(char input)
{
    switch (input)
    {
    case '+':
        return 1;
        break;
    case '-':
        return 1;
        break;
    case '*':
        return 1;
        break;
    case '/':
        return 1;
        break;
    case '%':
        return 1;
        break;
    case '(':
        return 1;
        break;
    }
    return 0;
}

int isOperand(char input)
{
    if(input>=65 && input<=90 || input>=97 && input<=122)
    {
        return 1;   
    }
    return 0;
}

int inPrec(char input)
{
    switch (input)
    {
    case '+':
    case '-':
        return 2;
        break;
    case '*':
    case '/':
    case '%':
        return 4;
        break;
    case '(':
        return 0;
        break;
    }
    return -1;
}

int outPrec(char input)
{
    switch (input)
    {
    case '+':
    case '-':
        return 1;
        break;
    case '*':
    case '/':
    case '%':
        return 3;
        break;
    case '(':
        return 100;
        break;
    }
    return -1;
}

void inToPost(char *input, char *output)
{
    stack<char> s;
    int i = 0;
    while(input[i]!='\0')
    {
        if(isOperand(input[i]))
        {
            cout<<input[i];
            output[i] = input[i];
        }
        else if(isOperator(input[i]))
        {
            if(s.empty()||outPrec(input[i])>inPrec(s.top()))
            {
                s.push(input[i]);
            }
            else{
                while (!s.empty() && outPrec(input[i])<inPrec(s.top()))
                {
                   cout<<s.top();
                   output[i] = s.top();
                   s.pop();
                }
                s.push(input[i]);
                
            }
        }

        else if(input[i]==')')
        {
            while (s.top() != '(')
            {
                cout<<s.top();
                output[i] = s.top();
                s.pop();
                if(s.empty())
                {
                    cout<<"Wrong Input"<<endl;
                    exit(1);
                }
            }
            s.pop();
            
        }
        i++;
    }

    while (!s.empty())
    {
        if(s.top()=='<')
        {
            cout<<"Wrong Input"<<endl;
            exit(1);
        }
        cout<<s.top();
        //output[i] = s.top();
        s.pop();
    }

    i=0;
    while (output[i]!='\0')
    {
        cout<<output[i];
        i++;
    }
    
    //return *output;
    
}

int main()
{
    char input[] = "a+b*c-(d/e+f*g*h)";
    char output[152];
    inToPost(input, output);
    return 0;
}