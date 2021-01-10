#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
class sparse
{
    int row,col,val;
public:
    sparse()
    {
        row=col=val=0;
    }
    void setdata(int r,int c,int v)
    {
        row=r;
        col=c;
        val=v;
    }
    void display()
    {
        cout<<row<<"\t"<<col<<"\t"<<val<<"\n";
    }
    void transpose(sparse a[])
    {
        sparse b[a[0].val+1];
        b[0].row=a[0].col;
        b[0].col=a[0].row;
        b[0].val=a[0].val;//till here same as slow transpose**
        int i;
        int rt[a[0].col],sp[a[0].col];//create row term array and start position array of size of number of columns in the matrix
        for(i=0;i<a[0].col;i++)
            rt[i]=0;//initialize row term array to zero
        for(i=1;i<a[0].val;i++)//find number of non zero terms in each column
            rt[a[i].col]++;//row term array is only used to create start pos array
        sp[0]=1;
        for(i=1;i<=a[0].col;i++)
            sp[i]=sp[i-1]+rt[i-1];//start position for 1st element in the column in the sparse matrix
        for(i=1;i<=a[0].val;i++)//each row of sparse matrix is correctly placed in its position in each iteration; pos=sp[a[i].col]
        {
            int temp=sp[a[i].col];
            b[temp].col=a[i].row;
            b[temp].row=a[i].col;
            b[temp].val=a[i].val;
            sp[a[i].col]++;//increment pos
        }
        cout<<"\nSparse matrix transpose is\n";
        for(i=0;i<=a[0].val;i++)
        b[i].display();
    }

};
int main()
{
    int r,c,i,j,v=0,k=1;
    cout<<"Enter dimensions of the matrix\n";
    cin>>r>>c;
    int ar[r][c];
    cout<<"\nEnter elements of the matrix\n";
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]!=0)//count number of non zero values in the matrix
                v++;
        }
    sparse a[v+1];
    a[0].setdata(r,c,v);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(ar[i][j]!=0)
            {
                a[k].setdata(i,j,ar[i][j]);
                k++;
            }
    cout<<"\nSparse matrix is\n";
    for(i=0;i<=v;i++)
        a[i].display();
    a[0].transpose(a);

}
