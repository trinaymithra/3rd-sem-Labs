#include <iostream>
using namespace std;
class cq//cirular queues using counter
{
    int a[10],high=10,r=-1,f=-1,i,counter=0;
    public:
    void ins(int);
    int del();
    void disp();
};
void cq::ins(int key)
{
    if(counter==high)
        cout<<"Queue is full";
    else
    {
        r=(r+1)%high;
        a[r]=key;
        counter+=1;
    }
}
int cq::del()
{
    if(counter==0)
    {
        cout<<"Queue is empty";
        return(-999);
    }
    else
    {
        f=(f+1)%high;
        counter-=1;
        return (a[f]);
    }
}
void cq::disp()
{
    if(counter==0)
        cout<<"Queue is empty";
    else
    {
        for(i=(f+1)%high;i!=r;i=(i+1)%high)//all elements cannot be printed using a single loop
            cout<<a[i]<<"\t";
        cout<<a[r];//the last element in the circular queue should be printed seperately
    }
}
int main()
{
    int key,ch,ele;
    cq arr;
    cout<<"Enter '1' to insert an element, 2 to delete an element from circular queue, '3' to display the array, and '4' to exit\n";
    do
    {
        cin>>ch;
        switch(ch)
        {
            case 1:
                    cout<<"Enter the element to be inserted: ";
                    cin>>key;
                    arr.ins(key);
                    break;
            case 2: cout<<arr.del()<<"\n"; break;
            case 3: arr.disp(); break;
            case 4: break;
        }
        
    }while(ch<4);
    return 0;
}
