#include <iostream>
using namespace std;

//implementing multiple stacks using a single stack
int high=100;
class stak {
    int s[100],top[100],bottom[100];
    public: 
    stak() {
        top[0]=-1;
    }
    void stackdef(int,int);
    void push(int, int);
    int pop(int);
    void display(int);
};

void stak::stackdef(int nos, int ss) {
    int i;
    for(i=0;i<nos;i++) {
        top[i]=ss*i-1;
        bottom[i]=top[i];
    }
}

void stak::push(int ns, int n) {
    if (top[ns]==high-1||top[ns]==bottom[ns+1])
        cout<<"Stack is full";
    else
        s[++top[ns]]=n;
}

int stak::pop(int ns) {
    int ele;
    if(top[ns]==bottom[ns]) {
        cout<<"Stack is empty";
        return (-999);
    }
    else
        return s[top[ns]--]
}

void stak::display(int ns) {
    int i;
    if (top[ns]==bottom[ns])
        cout<<"Stack is empty";
    else
        for(i=top[ns];i>bottom[ns];i--)
            cout<<s[i]<<"\t";
}

int main() {
    int nos,ss,maxsize,ch,ns,ele;
    stak s;

    cout<<"Enter the max size of stack: ";
    cin>>maxsize;
    
    cout<<"Enter number of stacks: ";
    cin>>nos;
    
    ss=maxsize/nos;
    s.stackdef(nos,ss);
    
    cout<<"Enter 1. push\n2. pop\n3.display\n 4.exit\n";
    do {
        cin>>ch;
        switch(ch) {
            case 1:
                cout<<"Enter element and stack number";
                cin>>ele>>ns;
                s.push(ns,ele);
                break;
            case 2:
                cout<<"Enter stack number";
                cin>>ns;
                s.pop(ns);
                break;
            case 3:
                cout<<"Enter stack number";
                cin>>ns;
                s.display(ns);
                break;
            case 4: break;
            default: cout<<"Invalid choice!";
        }
    } while(ch!=4);
    return 0;
}