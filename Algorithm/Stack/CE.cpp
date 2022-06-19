#include<bits/stdc++.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
using namespace std;
char st[20];
int top = -1;
void push(char x)
{
    st[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return st[top--];
}

void Evaluate(char *post)
{
    int i=0,ans = 0,a,b;
    while (i<strlen(post))
    {
        char ele = post[i];
        if(isdigit(ele))
        {
            push(ele - '0');   
        }
        else
        {
            a = pop();
            b = pop();
            switch (ele)
            {
            case '+':
                ans = b + a;
                break;
            case '-':
                ans = b-a;
            case '^':
                ans = pow(b,a);
            case '/':
                ans = b/a;            
            default:
                break;
            }
            push(ans);
        }
        i++;
    }
    printf("\n");
    printf("%d",pop());
    
}

int priority(char x)
{
    if(x == '(')
        return 0;
    else if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    return -1;
}

int isalum(char x)
{
    if(x>=48 && x<=57)
     return 1;
    return 0;
}

int main()
{
    char exp[20];
    char post[20];
    char *e, x;
    printf("Enter the expression :: ");
    scanf("%s", exp);
    e = exp;
    int i=0;
    while (*e !='\0')
    {
        if(isalum(*e))
        {
            post[i] = *e;
            printf("%c",*e);
        }
        else if (*e == '(')
        {
            push(*e);
        }
        else if (*e == ')')
        {
            while ((x = pop()) != '(')
            {
                post[i] = x;
                printf("%c", x);
            }
            
        }
        else
        {
            while (priority(st[top])>= priority(*e))
            {
                post[i] = pop();
                printf("%c",post[i]);
            }
            push(*e);
            
        } 
        e++;
    }

    while (top != -1)
    {
        post[i] = pop();
        printf("%c",post[i]);
    }

    Evaluate(post);
    return 0;
    
}