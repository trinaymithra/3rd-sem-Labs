#include <iostream>
#define NULL 0
using namespace std;
class dll
{
    int data;
    dll *prev,*next;
    dll *first=NULL;
public:
    void ins()//inserts at the end of the list
    {
        int d;
        cout<<"Enter node value: ";
        cin>>d;
        dll *temp=new dll;
        temp->data=d;
        temp->next=NULL;temp->prev=NULL;
        if(first==NULL)
            first=temp;
        else
        {
            dll *i;
            for(i=first;i->next!=NULL;i=i->next);
                {i->next=temp;temp->prev=i;}
        }
    }
    void display()//displays all the data in the list
    {
        dll *i;
        if(first==NULL)
            {cout<<"List is empty"; return;}
        cout<<"The list is: ";
        for(i=first;i!=NULL;i=i->next)
            cout<<i->data<<"\t";
        cout<<"\n";
    }
    void delend()
    {
        dll *i;
        if(first==NULL)
            cout<<"LIst is empty";
        else
        {
            for(i=first;i->next!=NULL;i=i->next);
            (i->prev)->next=NULL;
            delete (i);
            display();
        }
    }
    void inspos()//Insert the element at desired position
    {
        int d,pos,temp;
        dll *i;
        dll *t=new dll;
        display();
        cout<<"Enter data: ";
        cin>>d;
        t->data=d;
        t->prev=NULL;t->next=NULL;
        cout<<"Enter the position: ";
        cin>>pos;
        if(first==NULL)
        {
            ins();
            return;
        }
        for(temp=0,i=first;temp<pos-1;i=i->next,temp++);//use "-1" if you need to use normal numbering, avoid if you need to use array type of indexing
        i->prev->next=t;
        t->prev=i->prev;t->next=i;
        i->prev=t;
        display();
    }
    void delpos()//Delete element at given position
    {
        int pos,temp;
        dll *i;
        if(first==NULL)
            {cout<<"List is empty"; return; }
        display();
        cout<<"Enter the position at which element is to be deleted: ";
        cin>>pos;
        for(temp=0,i=first;temp<pos-1;i=i->next,temp++);
        i->prev->next=i->next;
        i->next->prev=i->prev;
        delete (i);
        display();
    }
    void insaft(int x)//inserts the element after the given element
    {
        int d,c=0;
        cout<<"Enter data: ";
        cin>>d;
        dll *temp=new dll;
        temp->data=d;
        temp->next=NULL;temp->prev=NULL;
        dll *i;
        for(i=first;i!=NULL;i=i->next)
        {
            if(i->data==x)
            {
                temp->next=i->next;temp->prev=i;
                i->next->prev=temp;
                i->next=temp;
                c=1;
                break;
            }
        }
        if(c==0)
            cout<<"Element not inserted as key not found";
        else
        {
            cout<<"Element inserted";
            display();
        }
    }
    void insbef(int x)//inserts the element before the given element
    {
        int d,c=0;
        cout<<"Enter data: ";
        cin>>d;
        dll *temp=new dll;
        temp->data=d;
        temp->next=NULL;temp->prev=NULL;
        dll *previ;
        dll *i;
        if(first->data==x)
        {
            temp->next=first;
            first->prev=temp;
            first=temp;
        }
        else
        {
        for(i=first;i!=NULL;previ=i,i=i->next)
        {
            if(i->data==x)
            {
                temp->next=i;temp->prev=previ;
                i->prev=temp;
                previ->next=temp;
                c=1;
                break;
            }
        }
        if (c==0)
            cout<<"Element not inserted as key is not found";
        else
        {
            cout<<"Element inserted\n";
            display();
        }
        }
    }
    void rev()
    {

        dll *p1=NULL,*p2=NULL;
        int c=0,i=0,temp;
        for(p2=first;p2->next!=NULL;c++,p2=p2->next);
        p1=first;
        while(i<c/2)
        {
            temp=p1->data;
            p1->data=p2->data;
            p2->data=temp;
            p1=p1->next;
            p2=p2->prev;
            i++;
        }
        display();
    }
};
int main()
{
    dll ob;
    int ch,key;
    cout<<"Enter 1.Insert at end\n2.Delete from the end\n3.Insert at a position\n4.Delete at a position\n5.Insert after an element\n6.Insert before an element\n7.display the list\n8.Reverse the list\n9.Exit\n";
    do{
        cin>>ch;
        switch(ch)
        {
            case 1: ob.ins(); break;
            case 2: ob.delend(); break;
            case 3: ob.inspos(); break;
            case 5:
                cout<<"Enter the element after which data is to be inserted: ";
                cin>>key;
                ob.insaft(key);
                break;
            case 6:
                cout<<"Enter the element before which data is to be inserted: ";
                cin>>key;
                ob.insbef(key);
                break;
            case 4: ob.delpos(); break;
            case 7: ob.display(); break;
            case 8: ob.rev(); break;
            case 9: break;
            default: cout<<"Invalid choice";
        }
    }while(ch!=9);
    return 0;
}
