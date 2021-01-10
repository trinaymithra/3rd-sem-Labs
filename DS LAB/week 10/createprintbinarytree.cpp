#include <iostream>
#define NULL 0
using namespace std;
class tree
{
    tree *left, *right;
    int data;
public:
    tree(int ele)
    {
        data=ele;
        left=NULL; right= NULL;
    }
    tree()
    {
        left=NULL; right=NULL;
    }
    tree* cre()
    {
        tree *t;
        int x;
        cout<<"Enter data: (Enter -1 for no data)";
        cin>>x;
        if(x==-1) return NULL;
        t=new tree;
        t->data=x;
        cout<<"Enter left child of "<<x;
        t->left=cre();
        cout<<"Enter right child of "<<x;
        t->right=cre();
        return t;
    }
    void inorder(tree *p)
    {
        if(p!=NULL)
        {
            inorder(p->left);
            cout<<p->data<<"\t";
            inorder(p->right);
        }
    }
};
int main()
{
    int root;
    cout<<"Enter root of the tree: ";
    cin>>root;
    tree ob=new tree(root);
    ob.cre();
    ob.inorder();
    return 0;
}
