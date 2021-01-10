#include <iostream>
using namespace std;

int main() {

    int a[10],i,pass,n,small,pos;
    
    cout<<"Enter the array size: ";
    cin>>n;
    
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(pass=0;pass<n-1;pass++) {//select the smallest element and place it at the start of the array
        small=a[pass];
        pos=pass;
        for(i=pass+1;i<n;i++)
            if (small>a[i]) {
                small=a[i];
                pos=i;
            }
        a[pos]=a[pass];
        a[pass]=small;
    }

    cout<<"Sorted array is: \n";
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t";
    return 0;
}
