#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int high=100;
class stak
{
    int s[100],top;
    public: stak()
    {
        top=-1;
    }
    void push(int);
    int pop();
    void display();
};
void stak::push(int n)
{
    if (top==high-1)
        cout<<"Stack is full";
    else
    {
        top=top+1;
        s[top]=n;
    }

}
int stak::pop()
{
    int ele;
    if(top==-1)
    {
        cout<<"Stack is empty";
        return (-999);
    }
    else
    {
        ele=s[top];
        top=top-1;
        return (ele);
    }
}
void stak::display()
{
    int i;
    if (top==-1)
        cout<<"Stack is empty";
    else
        for(i=top;i>=0;i--)
            cout<<s[i]<<"\t";
}
int main()
{
    stak s;
    int i,len,flag=1;
    char str[100],c;
    cout<<"Enter an expression: ";
    fflush(stdin);
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
    	
        if(str[i]=='[' || str[i]=='{' || str[i] =='(')
            s.push((int)str[i]);
        if(str[i]=='}')
        {
            c=(char)s.pop();
            if (c!='{')
            {
                flag=0;
                break;
            }
        }
        if(str[i]==']')
        {
           c=(char)s.pop();
           if (c!='[')
            {
                flag=0;
                break;
            }
        }
        if(str[i]==')')
            {
               c=(char)s.pop();
               if (c!='(')
                    {
                        flag=0;
                        break;
                    }
            }

    }
         if(flag==1)
            cout<<"Expression is balanced";
        else
            cout<<"Expression is not balanced";
    return 0;
}
