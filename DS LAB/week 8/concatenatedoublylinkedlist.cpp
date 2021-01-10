#include <iostream>
using namespace std;
class dll
{
    int data;
    dll *prev,*next;
    public:
    dll* ins(dll *head)//inserts at the end of the list
    {
        int d;
        cout<<"Enter node value: ";
        cin>>d;
        dll *temp=new dll;
        temp->data=d;
        temp->next=NULL;temp->prev=NULL;
        if(head==NULL)
            head=temp;
        else
        {
            dll *i;
            for(i=head;i->next!=NULL;i=i->next);
                {i->next=temp;temp->prev=i;}
        }
        return head;
    }
    void display(dll *first)//displays all the data in the list
    {
        dll *i;
        if(first==NULL)
            {cout<<"List is empty"; return;}
        cout<<"The list is: ";
        for(i=first;i!=NULL;i=i->next)
            cout<<i->data<<"\t";
        cout<<"\n";
    }
    dll* concat(dll *f1,dll *f2)
    {
        //display(f1);
        //display(f2);
        dll *c;
        if(f1==NULL)
            f1=f2;
        else if(f2==NULL)
        {}
        else
        {
            for(c=f1;c->next!=NULL;c=c->next);
            c->next=f2;
            f2->prev=c;
        }
        //display(f1);
        return f1;
        //f1.display();
    }

};
dll *p1=NULL, *p2=NULL;
int main()
{
    dll ob1;
    int n1,n2,i;
    cout<<"Enter no. of elements in 1st list";
    cin>>n1;
    for(i=0;i<n1;i++)
        p1=ob1.ins(p1);
    cout<<"Enter no. of elements in 2nd list";
    cin>>n2;
    for(i=0;i<n2;i++)
        p2=ob1.ins(p2);
    p1=ob1.concat(p1,p2);
    ob1.display(p1);
    return 0;
}
