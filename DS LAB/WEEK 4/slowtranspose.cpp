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
    void slowtranspose(sparse a[])
    {
        sparse b[a[0].val+1];//declare transpose of sparse matrix
        b[0].row=a[0].col;//set 1st row of transpose
        b[0].col=a[0].row;
        b[0].val=a[0].val;
        int i,j,k=1;//k is the loop variable for transpose
        for(i=0;i<a[0].col;i++)
            for(j=1;j<=a[0].val;j++)//array length=a[0].val+1
            {
                //rn=a[j].col;
                if(a[j].col==i)
                {
                    b[k].col=a[j].row;
                    b[k].row=a[j].col;
                    b[k].val=a[j].val;
                    k++;
                }
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
    int ar[r][c];//declare the matrix
    cout<<"\nEnter elements of the matrix\n";
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {
            cin>>ar[i][j];
            if(ar[i][j]!=0)
                v++;//count number of non zero elements
        }
    sparse a[v+1];//declare a sparse matrix that holds values along with their positions
    a[0].setdata(r,c,v);//set 1st row of sparse matrix with matrix dimensions and no. of non zero values
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(ar[i][j]!=0)
            {
                a[k].setdata(i,j,ar[i][j]);//set all non zero elements into sparse matrix
                k++;
            }
    cout<<"\nSparse matrix is\n";
    for(i=0;i<v+1;i++)
        a[i].display();
    a[0].slowtranspose(a);

}
