    // C++ program to convert postfix to prefix expression.  
    #include <iostream>  
    #include<stack>  
    using namespace std;  
    // Checking whether the symbol is operand or not..  
    bool isOperand(char c)  
    {  
        if((c>='a' && c<='z') || (c>='A' && c<='Z'))  
        {  
            return true;  
        }  
        else  
        {  
            return false;  
        }  
    }  
    // Converting postfix to prefix expression in C++  
    string postfixtoprefix(string postfix)  
    {  
        stack<string> s;  // using predefined stack data structure in stl library  
       //  executing the loop from 0 till the length of the expression..  
       for(int i=0; i< postfix.length(); i++)  
        {  
            if(isOperand(postfix[i]))  // calling the isOperand() function  
            {  
                string op(1, postfix[i]);  // converting the char type variable into string type.  
                s.push(op);  // Pushing the operand into the stack..  
            }  
            else  
            {  
                string op1 = s.top();  // declaration of op1 variable of type string.  
                s.pop(); // pop the operand from the stack.  
                string op2 = s.top(); // declaration of op2 variable of type string  
                s.pop(); // pop the operand from the stack.  
                string expression = postfix[i] + op2 + op1;  // concatenating the operands and operator  
                s.push(expression); // push the expression into the stack.  
                  
            }  
              
        }  
        return s.top(); // returning the top of the stack.  
    }  
    int main()  
    {  
        string postfix, prefix; // declaration of two variables of type string  
        std::cout << "Enter a postfix expression :" << std::endl;  
        std::cin >> postfix;  
        std::cout << "postfix expression : " << postfix<<std::endl;  
        prefix = postfixtoprefix(postfix); // calling the postfixtoprefix() function  
        std::cout << "prefix expression : " << prefix<< std::endl;  
        return 0;  
    }  