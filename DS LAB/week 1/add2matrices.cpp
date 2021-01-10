#include <iostream>
using namespace std;

int main() {

    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
    cout<<"Enter the dimensions of two matrices: ";
    cin>>m>>n>>p>>q;

    if(m!=p || n!=q)
        cout<<"Addition not possible";

    else {

        cout<<"Enter elements of 1st matrix";
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                cin>>a[i][j];

        cout<<"Enter elements of 2nd matrix";
        for(i=0;i<p;i++)
            for(j=0;j<q;j++)
                cin>>b[i][j];

        for(i=0;i<p;i++)
            for(j=0;j<q;j++)
                c[i][j]=a[i][j]+b[i][j];//addition

        cout<<"Matrix obtained after addition is : \n";
        for(i=0;i<p;i++) {
            for(j=0;j<q;j++)
                cout<<c[i][j]<<"\t";
            cout<<"\n";
        }
    }
    return 0;
}
