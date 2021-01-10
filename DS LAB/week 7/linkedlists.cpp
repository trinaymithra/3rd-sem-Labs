#include <iostream>
#define NULL 0
using namespace std;
//first form the links with your current variable and then alter the links of existing list
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
    void insbef(int x)//inserts the node before the given element
    {
        int d,c=0;
        cout<<"Enter node value: ";
        cin>>d;
        node *temp=new node;
        temp->data=d;
        temp->next=NULL;
        node *prev;
        node *i;
        if(first->data==x)
        {
            temp->next=first;
            first=temp;
        }
        else
        {
            for(i=first;i!=NULL;prev=i,i=i->next)
            {
                if(i->data==x)
                {
                    temp->next=i;
                    prev->next=temp;
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
    void insaft(int x)//inserts the node after the given element
    {
        int d,c;
        cout<<"Enter node value: ";
        cin>>d;
        node *temp=new node;
        temp->data=d;
        temp->next=NULL;
        node *i;
        for(i=first;i!=NULL;i=i->next)
        {
            if(i->data==x)
            {
                temp->next=i->next;
                i->next=temp;
                c=1;
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
    void del(int x)//to delete, store the link to be deleted in a temporary variable, 
    //link the previous link to next link and then delete the temporary variable
    {
        if(first==NULL)
        {
            cout<<"List is empty";
            return;
        }
        if(first->data==x)
        {
            node *i=first;
            first=first->next;
            delete(i);
            i=NULL;
            return;
        }
        node *prev;
        int flag=0;
        for(node *i=first;i!=NULL;prev=i,i=i->next)
            if(i->data==x)
            {
                prev->next=i->next;
                delete (i);
                flag=1;
                break;
            }
        if(flag==0)
            cout<<"Key not found";
    }
    void rev()
    {

        node *cur=NULL,*prev=NULL;
        while(first!=NULL)
        {
            cur=first;
            first=first->next;
            cur->next=prev;
            prev=cur;
        }
        first=cur;
        display();
    }
    void sortas()
    {
        node *i,*j;
        int t;
        for(i=first;i->next!=NULL;i=i->next)
            for(j=i->next;j!=NULL;j=j->next)
                if(i->data>j->data)
                {
                    t=j->data;
                    j->data=i->data;
                    i->data=t;
                }
        display();
    }
    void delalternate()
    {
        node *prev=first;
        node *i=prev->next;
        while(i!=NULL&&prev!=NULL)
        {
            prev->next=i->next;
            delete(i);
            if(prev==NULL||prev->next==NULL)
                break;
            i=prev->next->next;
            prev=prev->next;
        }
        display();
    }
    void inssort()
    {
        int d,c=0;
        cout<<"Enter node value: ";
        cin>>d;
        node *temp=new node;
        temp->data=d;
        temp->next=NULL;
        node *prev;
        node *i;
        if(d<first->data)
        {
            temp->next=first;
            first=temp;
        }
        for(i=first;i!=NULL;prev=i,i=i->next)
        {
            if(i->data>=d)
            {
                temp->next=i;
                prev->next=temp;
                c=1;
                cout<<"Element inserted";
                display();
                break;
            }
        }
        if (c==0)
            cout<<"Element not inserted as key is not found";
    }
};
int main()
{
    node ob;
    int ch,key;
    cout<<"Enter 1.Insert\n2.Insert before another element\n3.Insert after another element\n4.Delete an element\n5.Display the list\n6.Reverse the list\n7.Sort the list\n8.Delete alternate node\n9.Insert in sorted list\n10.Exit\n";
    do{
        cin>>ch;
        switch(ch)
        {
            case 1: ob.ins(); break;
            case 2:
                cout<<"Enter the key before which element has to be inserted: ";
                cin>>key;
                ob.insbef(key);
                break;
            case 3:
                cout<<"Enter the key after which element has to be inserted: ";
                cin>>key;
                ob.insaft(key);
                break;
            case 4:
                cout<<"Enter element to be deleted: ";
                cin>>key;
                ob.del(key);
                break;
            case 5: ob.display(); break;
            case 6: ob.rev(); break;
            case 7: ob.sortas(); break;
            case 8: ob.delalternate(); break;
            case 9: ob.inssort(); break;
            case 10: break;
            default: cout<<"Invalid choice";
        }
    }while(ch!=10);
    return 0;
}
