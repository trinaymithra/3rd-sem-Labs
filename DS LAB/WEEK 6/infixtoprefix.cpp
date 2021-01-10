#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;
enum precedence{lpar,rpar,Plus,Minus,mult,div,mod,operand};
int icp[]=     {20,  19,  12,  12,   13,  13, 13, 0};
int isp[]={0,19,12,12,13,13,13,0};
class stak
{
    int top,high;
    char s[100];
public:
    stak(){top=-1;high=100;}
    int isEmpty()
    {
        if(top==-1)
            return 1;
        return 0;
    }
    char topele()
    {
        return s[top];
    }
    void push(char c)
    {
        s[++top]=c;
    }
    char pop()
    {
        return s[top--];
    }
};
precedence token(char c)
{
    switch(c)
    {
        case '(': return lpar;
        case ')': return rpar;
        case '+': return Plus;
        case '-': return Minus;
        case '*': return mult;
        case '/': return div;
        case '%': return mod;
        default: return operand;
    }
}
void prefix(char infix[])
{
    precedence temp;
    int i,len,j=0;
    char fix[100];
    stak s;
    for(i=0;i<=len;i++)//reverse the brackets
    {
        if (infix[i]=='(')
            infix[i]=')';
        if (infix[i]==')')
                infix[i]='(';
    }
    for(len=strlen(infix);len>=0;len--)
    {
        temp=token(infix[len]);
        if (temp==operand)//if operand, store in a string(reverse and display at the end) or stack(pop at the end)
        {
            fix[j++]=infix[len];
            //j++;
        }
        else if (temp==rpar)
        {
            while(token(s.topele())!=lpar)
            {
                fix[j++]=s.pop();
                //j++;
            }
            char c=s.pop();
        }
        else
        {
            if(s.isEmpty())
                s.push(infix[len]);
            else
            {
                while( icp[temp] < isp[token(s.topele())] && (!s.isEmpty()) )
                {
                    fix[j++]=s.pop();
                    //j++;
                }
                s.push(infix[len]);
            }
        }
    }
    fix[j]='\0';
    for(i=j;i>=0;i--)
        cout<<fix[i];
}
int main()
{
    char infix[100];
    cout<<"Enter an infix expression: ";
    fflush(stdin);
    gets(infix);
    prefix(infix);
    return 0;
}
