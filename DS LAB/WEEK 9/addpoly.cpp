#include <iostream>
#define NULL 0
using namespace std;
class poly
{
    int coe,ind;
    poly *next, *prev;
public:
    poly* ins(poly* p1, int c, int e)
    {
        poly *t=new poly;
        t->coe=c;t->ind=e;t->next=t;t->prev=t;
        if(p1==NULL) p1=t;
        else
        {
            poly *i;
            for(i=p1;i->next!=p1;i=i->next);
            i->next=t;t->prev=i;
            p1->prev=t;t->next=p1;
        }
        return p1;
    }
    void display(poly *p)
    {
        poly *po=p;
        while(p->next!=po)
        {
            cout<<p->coe<<"*x^"<<p->ind<<"+";
            p=p->next;
        }
        cout<<p->coe<<"x^"<<p->ind;
        cout<<"\n";
    }
    poly* add(poly *p1, poly *p2)
    {
        poly *a=p1, *b=p2;
        poly *res=NULL;
        if(p1==NULL) res=p2;
        else if(p2==NULL) res=p1;
        else
        {
            while(p1->ind>p2->ind){
            res=ins(res,p1->coe,p1->ind);
            p1=p1->next;}
            while(p2->ind>p1->ind){
            res=ins(res,p2->coe,p2->ind);
            p2=p2->next;}
            do
            {
                if(p1->ind>p2->ind)
                {
                    res=ins(res,p1->coe,p1->ind);
                    p1=p1->next;
                }
                else if(p1->ind<p2->ind)
                {
                    res=ins(res,p2->coe,p2->ind);
                    p2=p2->next;
                }
                else//indices are equal
                {
                    res=ins(res,(p1->coe+p2->coe),p2->ind);
                    p1=p1->next;p2=p2->next;
                }
            }while(p1!=a && p2!=b);
            if(p1!=a){
            do
            {
                res=ins(res,p1->coe,p1->ind);
                p1=p1->next;
            }while(p1!=a);}
            if(p2!=b){
            do
            {
                res=ins(res,p2->coe,p2->ind);
                p2=p2->next;
            }while(p2!=b);}
        }
        display(res);
        return res;
    }
};
poly *f1=NULL, *f2=NULL, *f3=NULL;
int main()
{
    cout<<"Enter no. of terms of 1st polynomial: ";
    int d1,d2,x,c,in;
    cin>>d1;
    poly a1,a2,a3;
    for(x=1;x<=d1;x++)
    {
        cout<<"Enter "<<x<<"th term coefficient and index :";
        cin>>c;
        cin>>in;
        f1=a1.ins(f1,c,in);
    }
    cout<<"Enter no. of terms in 2nd polynomial: ";
    cin>>d2;
    for(x=1;x<=d2;x++)
    {
        cout<<"Enter "<<x<<"th term coefficient and index :";
        cin>>c;
        cin>>in;
        f2=a2.ins(f2,c,in);
    }
    a1.display(f1);
    a1.display(f2);
    f3=a3.add(f1,f2);
    return 0;
}
