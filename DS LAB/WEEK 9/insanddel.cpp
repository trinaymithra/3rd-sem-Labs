#include <iostream>
#define NULL 0
using namespace std;
class cirdll
{
    cirdll *prev,*next;
    int data;
public:
    void ins();
    void del();
    void display();
};
cirdll *head=NULL;
void cirdll::display()
{
    if(head==NULL)
    {
        cout<<"List is empty";
        return;
    }
    cirdll *t;
    cout<<"The List is: \n";
    for(t=head;;t=t->next)
    {
        cout<<t->data<<"\t";
        if(t->next==head)
            break;
    }
    cout<<"\n";
}
void cirdll::ins()
{
    cout<<"Enter data: ";
    int d;
    cin>>d;
    cirdll *temp=new cirdll;
    temp->data=d;temp->prev=temp;temp->next=temp;
    if(head==NULL)
        {head=temp;display();}
    else
    {
        cirdll *t;
        for(t=head;t->next!=head;t=t->next);
        t->next=temp;temp->prev=t;
        temp->next=head;head->prev=temp;
        display();
    }
}
void cirdll::del()
{
    cout<<"Enter the data to be deleted: ";
    int x;
    cin>>x;
    if(head->data==x&&head->next==head)
    {
        cirdll *t=head;
        head=NULL;
        delete t;
        display();
    }
    else if(head->data==x)
    {
        cirdll *t=head;
        head=head->next;
        cirdll *t1;
        for(t1=head;t1->next!=t;t1=t1->next);
        head->prev=t1;
        t1->next=head;
        delete t;
        display();
        return;
    }
    else
    {
        cirdll *temp;
        for(temp=head;temp->next->next!=head;temp=temp->next)
        {
            if(temp->data==x)
            {
                cirdll *t2=temp;
                temp->prev->next=temp->next;
                temp->next->prev=temp->prev;
                delete t2;
                display();
                return;
            }
        }
        for(temp=head;temp->next!=head;temp=temp->next);
        if(temp->data==x)
        {
            cirdll *t3=temp;
            temp->prev->next=head;
            head->prev=temp->prev;
            delete t3;
            display();
            return;
        }
        cout<<"Element not found";
    }
}
int main()
{
    cout << "Enter '1' to insert element, '2' to delete, '3' to display, '4' to exit \n";
    int ch;
    cirdll ob;
    do
    {
        cin>>ch;
        switch (ch)
        {
            case 1: ob.ins(); break;
            case 2: ob.del(); break;
            case 3: ob.display(); break;
            case 4: break;
            default: cout<<"Invalid choice";
        }
    }while(ch!=4);
    return 0;
}
