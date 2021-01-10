#include <iostream>

using namespace std;
class bst
{
    bst *left, *right;
    int data;
public:
    bst(int ele)
    {
        left=right=NULL;
        data=ele;
    }
    bst(){left=right=NULL;}
    void ins(int);
    bool search(bst* root, int key);
    bst* del(bst*,int);
    void display(bst*);
};
bst *root=NULL;
void bst::ins(int ele)
{
    bst *temp=new bst(ele);
	if(root==NULL)
    {
        root=temp;
        return;
    }
	else
	{
		bst *curr=root,*prev=NULL;
		while(curr)
		{
			prev=curr;
			if(temp->data<curr->data)	curr=curr->left;
			else if(temp->data>curr->data)	curr=curr->right;
			else
			{
				cout<<"Insertion is not possible";
				return;
			}
		}

		if(temp->data>prev->data)
			prev->right=temp;
		else if(temp->data<prev->data)
			prev->left=temp;
	}
	return;

}
bool bst::search(bst *root, int key)
{
    if(!root) return false;
    else if(key==root->data) return true;
    else if(key<root->data) return search(root->left,key);
    else return search(root->right,key);
}
bst* bst::del(bst *root, int key)
{
    if(root==NULL) return root;
    if(root->data > key)
    {
        root->left=del(root->left,key);
        return root;
    }
    else if(root->data < key)
    {
        root->right=del(root->right,key);
        return root;
    }
    else//key found
    {
        if(root->left==NULL)
        {
            bst *temp=root->right;
            delete root;
            root=NULL;
            return temp;
        }
        else if(root->right==NULL)
        {
            bst *temp=root->left;
            delete root;
            root=NULL;
            return temp;
        }
        else//both childs exist
        {
            bst *succparent=root->right;
            bst *succ=root->right;//fining smallest element in right sub tree
            while(succ->left!=NULL)
            {
                succparent=succ;
                succ=succ->left;
            }
            succparent->left=succ->right;
            root->data=succ->data;
            delete succ;
            succ=NULL;
            return root;
        }
    }
}
void bst::display(bst *root)
{
    if(root)
    {
        display(root->left);
        cout<<root->data<<"\t";
        display(root->right);
    }
}
int main()
{
    cout << "1.Insert \n2.Delete\n3.Search\n4.Display\n5.Exit\n";
    int ch,key;
    bst ob;
    do
    {
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter data: "; cin>>key;
                ob.ins(key);
                break;
            case 2:
                cout<<"Enter data to be deleted: "; cin>>key;
                ob.del(root,key);
                break;
            case 3:
                cout<<"Enter data to be searched: "; cin>>key;
                if(ob.search(root,key))
                    cout<<"Element is present in the tree";
                break;
            case 4: ob.display(root); break;
            case 5: break;
            default: cout<<"Invalid choice!";
        }
    }while(ch!=5);
    return 0;
}
