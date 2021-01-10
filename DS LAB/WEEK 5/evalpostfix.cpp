#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class stak
{
    int top;
    int s[100];
public:
    stak(){top=-1;}
    void push(int c)
    {
        if(top==100)
            cout<<"Stack is full";
        else
        {
            top+=1;
            s[top]=c;
        }
    }
    int pop()
    {
        if(top==-1)
            return 'x';
        else
        {
            //top-=1;
            return (s[top--]);
        }
    }

};
void posteval(char postfix[])
{
    int dig,op1,op2,i,val;
    char t;
    stak s;
    for(i=0;postfix[i]!='\0';i++)
    {
        t=postfix[i];
        if(t>='0' && t<='9')//if digit, then push into stack
        {
            dig=t-'0';
            s.push(dig);
        }
        else if(t=='+'||t=='-'||t=='*'||t=='/'||t=='%')//if operator, pop the top 2 elements, operate on them and push the result into stack
        {
            op2=s.pop();
            op1=s.pop();
            switch(t)
            {
                case '+':
                    s.push(op1+op2);
                    break;
                case '-':
                    s.push(op1-op2);
                    break;
                case '*':
                    s.push(op1*op2);
                    break;
                case '/':
                    s.push(op1/op2);
                    break;
                case '%':
                    s.push(op1%op2);
                    break;
                default: cout<<"Invalid operator used in the expression";
            }
        }
        else//if variable, request for its value
        {
            cout<<"Enter "<<t<<" value: ";
            cin>>val;
            s.push(val);
        }
    }
    cout<<"Result = "<<s.pop();
}
int main()//evaluate given postfix expression
{
    char postfix[100];
    cout<<"Enter a postfix expression: ";
    fflush(stdin);
    gets(postfix);
    posteval(postfix);
    return 0;
}
