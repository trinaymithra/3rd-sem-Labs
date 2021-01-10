#include <iostream>
#include <stdio.h>
using namespace std;
int high=100;
class stak
{
    int top,a;
    char s[100];
    public: stak()
    {
        top=-1;
    }
    void push(char);
    char pop();
    void display();
};
void stak::push(char n)
{
    if (top==high-1)
        cout<<"Stack is full\n";
    else
    {
        top+=1;
        s[top]=n;
    }

}
char stak::pop()
{
    char ele;
    if(top==-1)
    {
        cout<<"Stack is empty\n";
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
        cout<<"Stack is empty\n";
    else
        for(i=top; i>=0;i--)
            cout<<s[i]<<"\t";
}
int main()
{
    stak s1;
    int i,j=0,n;
    char a[100];
    cout<<"Enter the string:";
    fflush(stdin);
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        s1.push(a[i]);
    }
    n=i;
    for(i=0;a[i]==s1.pop();i++)
        j++;//count number of times while loop is executed
    if(n==j)
        cout<<"Stack is a palindrome";
    else
        cout<<"Stack is not a palindrome";
    return 0;
}
