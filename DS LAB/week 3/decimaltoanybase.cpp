#include <iostream>
#include <stdio.h>
using namespace std;

//converting a number from decimal to any given base using stacks
int high=10;
class stak {
    int s[100],top,a;
    public: 
    stak() {
        top=-1;
    }
    void push(int);
    int pop();
    void display();
};

void stak::push(int n) {
    if (top==high-1)
        cout<<"Stack is full";
    else
        s[++top]=n;
}

int stak::pop() {
    if(top==-1) {
        cout<<"Stack is empty";
        return (-999);
    }
    else
        return s[top--];
}

void stak::display() {
    int i;
    if (top==-1)
        cout<<"Stack is empty";
    else
        for(i=top;i>=0;i--)
            cout<<s[i]<<"\t";
}

int main() {
    int num,base,i=0,j,ele;
    char c;
    stak s;

    cout<<"Enter a number:";
    cin>>num;
    cout<<"Enter the base to which number is to be converted:";
    cin>>base;
    
    while(num>0) {
        s.push(num%base);
        num=num/base;
        i++;
    }

    for(j=0;j<i;j++) {
        ele=s.pop();
        //cout<<ele;
        if(ele>9) {//for bases greater than 10
            c=ele-10+'A';
            cout<<(char)c;
        }
        else
            cout<<ele;
    }
    return 0;
}
