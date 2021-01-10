#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
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
void prepost()
{
    cout<<"Enter a prefix expression: \n";
    char pre[100],symbol[100],op1[100],op2[100];
    gets(pre);
    int len=strlen(pre);
    stak ob;
    for(; len>=0; len--)
    {
        char t=pre[len];
        char t1[10],t2[10];
        t1[0]=t; t1[1]='\0';
        strcpy(symbol,t1);
        if(isalpha(t))
            ob.push(symbol);
        else
        {
            strcpy(op1,ob.pop());
            strcpy(op2,ob.pop());
            //strcpy(t2,"(");
            strcpy(t2,op1);
            strcat(t2,op2);
            strcat(t2,symbol);
            //strcat(t2,")");
            ob.push(t2);
        }
    }
    char res[100];
    strcpy(res,ob.pop());
    cout<<res;
}
int main()
{
    prepost();
    return 0;
}
