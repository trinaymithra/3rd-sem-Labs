#include <iostream>
using namespace std;
class node
{
    int data;
    node *next;
    node *first=NULL;
public:
    void ins()//inserts at the end of the list
    {
        int d;
        cout<<"Enter node value: ";
        cin>>d;
        node *temp=new node;
        temp->data=d;
        temp->next=NULL;
        if(first==NULL)
            first=temp;
        else
        {
            node *i;
            for(i=first;i->next!=NULL;i=i->next);
                i->next=temp;
        }
    }
    void display()//displays all the nodes along with their addresses
    {
        node *i;
        if(first==NULL)
            {cout<<"List is empty"; return;}
        cout<<"The list is: ";
        for(i=first;i!=NULL;i=i->next)
            cout<<i->data<<"\t";
        cout<<"\n";
    }
    void delev()
    {
        if(first==NULL)
        {
            cout<<"List is empty";
            return;
        }
        /*if(first->data%2==0)
        {
            node *i=first;
            first=first->next;
            delete(i);
            i=NULL;
        }*/
        node *prev;
        for(node *i=first;i!=NULL;prev=i,i=i->next)
            if(i->data%2==0)
            {
                prev->next=i->next;
                delete i;
                i=prev->next;
            }
        display();
    }
};
int main()
{
    int n,i;
    node ob;
    cout<<"Enter no of nodes";
    cin>>n;
    for(i=0;i<n;i++)
        ob.ins();
    ob.delev();
    return 0;
}
