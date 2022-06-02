#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
//function Prototype Start
void push(int);
int pop();
void display();
//function Prototype End

//Global Variable Start
int stack[25]={0};
int top = -1;
int ch;
//Global Variable End

int main()
{
    char postfix[25] = {'\n'}, ele;
    int i=0, num1, num2, ans;
    printf("\nEnter Postfix Expression : ");
    scanf("%s",postfix);
    printf("\nPostfix Expression : %s", postfix);

    while (i<=strlen(postfix)-1)
    {
        ele = postfix[i];
        if(isdigit(ele))
        {
           push(ele - '0'); 
        }
        else
        {
            num1 = pop();
            num2 = pop();
            switch (ele)
            {
            case '^':
                ans = pow(num2, num1);
                break;
            case '/':
                ans = num2/num1;
                break;
            case '*':
                ans = num2*num1;
                break;
            case '+':
                ans = num2+num1;
                break;
            case '-':
                ans = num2-num1;
                break;
            }
            push(ans);
        }        

       i++;
    }

    printf("\nAns = %d",pop());

    return 0;
    
}

//User defined functions start
void push(int element)
{
    if(top == 24)
        printf("\nStack OVERFLOW");
    else
    {
        top++;
        stack[top] = element;
    }
}

int pop()
{
    if(top==-1)
        printf("\nStack UNDERFLOW.");
    else
    {
        ch = stack[top];
        top--;
    }
    return ch;
}

void display()
{
    printf("\nStack S = ");
    for(int i=0; i<=top; i++)
        printf(" | %d ", stack[i]);
}
//User defined functions End