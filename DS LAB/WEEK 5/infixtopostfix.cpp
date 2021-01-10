#include <iostream>
#include<stdio.h>
using namespace std;
enum precedence{lpar,rpar,Plus,Minus,mult,div,mod,operand};
int icp[]={20,19,12,12,13,13,13,0};
int isp[]={0,19,12,12,13,13,13,0};
class stak
{
    int top;
    char s[100];
public:
    stak() { top=-1; }
    void push(char a)
    {
       top+=1;
       s[top]=a;
    }
    char pop()
    {
        return (s[top--]);
    }
    char topele()
    {
        if(top==-1)
            return 'X';
        else
            return s[top];
    }
    void display()
    {
        int i;
        for(i=top;i>=0;i--)
            cout<<s[i];
    }
    int isempty()
    {
        if(top==-1)
            return 1;
        return 0;
    } 
};
precedence token(char c)
{
    switch (c)
    {
        case '(': return lpar;
        case ')': return rpar;
        case '+': return Plus;
        case '-': return Minus;
        case '*': return mult;
        case '/': return div;
        case '%': return mod;
        default : return operand;
    }
}
void postfix(char infix[])
{
    precedence temp;
    int i;
    char c;
    stak s;
    for(i=0;infix[i]!='\0';i++)
    {
        temp=token(infix[i]);
        if (temp==operand)//if operator then print
            cout<<infix[i];
        else if (temp==rpar)//if ')', then pop till '(' and ignore '('
        {
            while(token(s.topele())!=lpar)
                cout<<s.pop();
            c=s.pop();
        }
        else// if operand
        {
            if(s.isempty())//if stack is empty and token is operand, push into stack
                s.push(infix[i]);
            else
            {
                while(icp[temp]<=isp[token(s.topele())] && !s.isempty())//if stack is not empty pop till in coming precedence is less than in stack precedence and then push
                    cout<<s.pop();
                s.push(infix[i]);
            }
        }
    }
    s.display();
}
int main()//convert infix expression to postfix form
{
    char infix[100];
    cout<<"Enter an infix expression: \n";
    fflush(stdin);
    gets(infix);
    postfix(infix);
    return 0;
}
