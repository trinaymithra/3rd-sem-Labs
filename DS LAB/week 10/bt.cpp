#include<iostream>
#include<stdio.h>
#include<string.h>
#define null 0
using namespace std;


class bTree{
  bTree* lchild;
  int data;
  bTree* rchild;


  public :
  bTree(int val) {
    this -> data  = val;
    this -> lchild = null;
    this -> rchild = null;
  }
  bTree* createNodeR();
  bTree* createNodeI(bTree*,int,string);
  void inorderR(bTree*);
  void inorderI(bTree*);
  void preorderR(bTree*);
  void preorderI(bTree*);
  void postorderR(bTree*);
  void postorderI(bTree*);
  int getParent(bTree*,int,bTree*);
  int depth(bTree*);
};
bTree* STP = null;

bTree* bTree :: createNodeR() {

      int val;
      cout<<"Input data(-1, if NULL)\n"; cin>>val;
      if(val==-1) return STP;

      bTree* t = new bTree(val);
      cout<<"Input left child of "<<val<<"\n";
      t->lchild = createNodeR();
      cout<<"Input right child of "<<val<<"\n";
      t->rchild = createNodeR();

return t;


}
bTree* bTree :: createNodeI(bTree* root, int val, string dir) {

    bTree* t = new bTree(val);
        if(!root) {
        root = t;
        return root;
      }

      int i;

    bTree* curr;
    bTree* prev;
    prev = null;
    curr = root;

    for(i=0;i<dir.length()&&curr!=null;i++) {
      prev = curr;
      if(dir[i]=='L') curr=curr->lchild;
      else curr=curr->rchild;
    }
    if(curr||i!=dir.length()) {
      cout<<"Insertion NOT Possible!\n";
      delete t;
      return root;
    }
    if(dir[i-1]=='L') prev -> lchild = t;
    else              prev -> rchild = t;

    return root;
}



void bTree::inorderR(bTree* p) {

  if(p) {
    inorderR(p->lchild);
    cout<<p->data<<" ";
    inorderR(p->rchild);
  }
}

void bTree::preorderR(bTree* p) {
  if(p) {
  cout<<p->data<<" ";
  preorderR(p->lchild);
  preorderR(p->rchild);
  }

}

void bTree::postorderR(bTree* p) {

  if(p) {
    postorderR(p->lchild);
    postorderR(p->rchild);
    cout<<p->data<<" ";
  }
}


void bTree::postorderI(bTree* p) {
if(!p) return;

    bTree* stack1[20];
    bTree* stack2[20];

    int k1=-1,k2=-1;
    stack1[++k1]=p;
    while(k1>=0) {
        stack2[++k2] = stack1[k1--];
        if(stack2[k2]->lchild) stack1[++k1] = stack2[k2]->lchild;
        if(stack2[k2]->rchild) stack1[++k1] = stack2[k2]->rchild;
    }
    while(k2>=0) cout<<stack2[k2--]->data<<" ";
}

void bTree::preorderI(bTree* p) {

  int top=-1;
  bTree* stack[100];
  do{
    for(;p;p=p->lchild) {
      cout<<p->data<<" ";
      stack[++top]=p;
    }
    if(top>=0) p=stack[top--]; else break;
    p=p->rchild;
  }while(1);
}
void bTree::inorderI(bTree* p) {

  int top=-1;
  bTree* stack[100];
  do{
    for(;p;p=p->lchild) {

      stack[++top]=p;
    }
    if(top>=0)  p=stack[top--]; else break;
    cout<<p->data<<" ";
    p=p->rchild;
  }while(1);
}



  int bTree::getParent(bTree* curr, int c, bTree* prev) {

    if(curr) {
        getParent(curr->lchild,c,curr);
        if(curr->data == c) return prev->data;
        getParent(curr->rchild,c,curr);
    }


  }

int bTree::depth(bTree* r) {

    int ldepth,rdepth;
    if(!r) return 0;
    ldepth = depth(r->lchild);
    rdepth = depth(r->rchild);

    if(ldepth>rdepth) return ldepth+1;
    return rdepth+1;
}




int main() {
  bTree t(0);
  bTree* t1 = null;
//   int ch; int val; char dir[20];
//   do {
//   cout<<"\t\t---Binary Tree Operations---\n1. createNodeR()\n2. createNodeI()\n3. inorderR()\n4. preorderR()\n5. postorderR()\n";
//   cout<<"6. inorderI()\n7. preorderI()\n8. postorderI()\n9. getParent()\n";
//   cin>>ch;
//   switch(ch) {
//     case 1 : t1 = t.createNodeR(); t.inorderR(t1); break;
//     case 2 : cin>>val; cin.getline(dir,100,'\n');
//              t1 = t.createNodeI(t1,val,dir);
//              t.inorderR(t1);
//              break;
//     case 3 : t.inorderR(t1); break;
//     case 4 : t.preorderR(t1); break;
//     case 5 : t.postorderR(t1); break;
//     case 6 : t.inorderI(t1); break;
//     case 7 : t.preorderI(t1); break;
//     case 8 : cout<<"Function NOT defined!\n"; break;
//     case 9 : cin>>val; t.getParent(t1,val); break;
//     default : cout<<"Invalid choice!\n";
//
//   }
//
// }while(ch>=1&&ch<=9);
t1 = t.createNodeI(t1,1,"L");
t1 = t.createNodeI(t1,2,"L");
t1 = t.createNodeI(t1,3,"R");
t1 = t.createNodeI(t1,4,"LL");
t1 = t.createNodeI(t1,5,"LR");
t1 = t.createNodeI(t1,6,"RL");
t1 = t.createNodeI(t1,7,"RR");
cout<<t.getParent(t1,3,STP);




}
