#include <iostream>
using namespace std;
class stak
{
    int s[100],top;
public:
    stak(){top=-1;}
    void push(int n)
    {
        if(top==100)
            cout<<"Stack is full";
        else
            s[++top]=n;
    }
    int pop()
    {
        if(top==-1)
            return -999;
        return(s[top--]);
    }
    void disp()
    {
        int i;
        for(i=top;i>=0;i--)
            cout<<s[i]<<"\t";
    }
    int isempty()
    {
        if(top==-1)
            return 1;
        return 0;
    }
};
int main()//operate queue using stack concepts
{
    stak a,b;
    int ch,ele;
    cout<<"Enter '1' to insert, '2' to delete, '3' to display \n";
    cin>>ch;
    do
    {
        switch(ch)
        {
            case 1:
                cout<<"Enter the element: ";
                cin>>ele;
                if(!a.isempty())//if not empty, push all elements of 'a' to 'b' and also element, then again put them all back into 'a'
                {
                    while(!a.isempty())
                        b.push(a.pop());
                    b.push(ele);
                    while(!b.isempty())
                        a.push(b.pop());
                }
                else//if empty, push
                    a.push(ele);
                break;
            case 2:
                cout<<a.pop();
                break;
                case 3:
                    a.disp();
        }
         cout<<"Enter '1' to insert, '2' to delete, '3' to display, '4' to exit \n";
         cin>>ch;
    }while(ch<4);
    return 0;
}
