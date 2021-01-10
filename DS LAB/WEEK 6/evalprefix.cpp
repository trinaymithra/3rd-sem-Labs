#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class stak
{
    int s[100],top;
public:
    stak(){top=-1;}
    void push(int n)
    {
        s[++top]=n;
    }
    int pop()
    {
        return(s[top--]);
    }
};
void evalpre(char prefix[])
{
    int i,dig,op1,op2,val;
    char t;
    stak s;
    for(i=strlen(prefix)-1;i>=0;i--)
    {
        t=prefix[i];
        if(t>='0'&&t<='9')
        {
            dig=t-'0';
            s.push(dig);
        }
        else if(t=='+'||t=='-'||t=='*'||t=='/'||t=='%')
        {
            op1=s.pop();
            op2=s.pop();
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
            }
        }
        else//if alphabet
        {
            cout<<"Enter "<<t<<" value: ";
            cin>>val;
            s.push(val);
        }
    }
    cout<<"Result = "<<s.pop();
}
int main()
{
    char prefix[100];
    cout<<"Enter a prefix expression: ";
    fflush(stdin);
    gets(prefix);
    evalpre(prefix);
    return 0;
}
