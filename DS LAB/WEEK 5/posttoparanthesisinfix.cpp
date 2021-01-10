#include <iostream>
#include<ctype.h>
#include<string.h>
#include<stdio.h>
using namespace std;
class stak
{
    int top;
    char s[50][50];
    public:
    stak(){top=-1;}
    void push(char a[])
    {
        top++;
        strcpy(s[top],a);
    }
    char* pop()
    {
        if(top==-1)
            return "x";
        return(s[top--]);
    }
};
void postin()//create fully parenthesized in fix expression from post fix
    {
        stak ob;
        int i;
        char op1[10],op2[10],symbol[20],postfix[10];
        cout<<"Enter postfix expression: ";
        fflush(stdin);
        gets(postfix);
        for(i=0;postfix[i]!='\0';i++)
        {
            char t1[10],t2[10];
            t1[0]=postfix[i];//t1==one element from post fix expression
            t1[1]='\0';
            strcpy(symbol,t1);
            if(!isalpha(postfix[i]))//if operator, then pop 2 elements from stack, apply operator and then push the whole expression into stack
            {
                strcpy(op2,ob.pop());
                strcpy(op1,ob.pop());
                strcpy(t2,"(");//store whole expression in t2
                strcat(t2,op1);
                strcat(t2,symbol);
                strcat(t2,op2);
                strcat(t2,")");
                ob.push(t2);
            }
            else
                ob.push(symbol);
        }
        cout<<"Result: "<<ob.pop();
    }
int main()
{
    postin();
    return 0;
}
