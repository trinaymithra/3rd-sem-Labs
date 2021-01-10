#include <iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
class stak
{
    char s[50][50];
    int top;
public:
    stak(){top=-1;}
    void push(char a[])
    {
        top+=1;
        strcpy(s[top],a);
    }
    char* pop()
    {
        return (s[top--]);
    }
};
void parin(char prefix[])
{
    stak ob;
    int i;
    char op1[10],op2[10],symbol[10];
    for(i=strlen(prefix) - 1; i>=0; i--)
    {
        char t1[10],t2[10];//technically, t1 has no use
        t1[0]=prefix[i];
        t1[1]='\0';
        strcpy(symbol,t1);
        if(!isalpha(prefix[i]))
        {
            strcpy(op1,ob.pop());
            strcpy(op2,ob.pop());
            strcpy(t2,"(");
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
    char prefix[100];
    cout<<"Enter a prefix expression: ";
    fflush(stdin);
    gets(prefix);
    parin(prefix);
    return 0;
}
