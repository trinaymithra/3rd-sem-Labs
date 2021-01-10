#include <iostream>
using namespace std;

int main() {

    int a[10],i,j,n,pass,temp;
    
    cout<<"Enter the array size: ";
    cin>>n;
    
    cout<<"Enter the array elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(pass=1;pass<n;pass++)//number of passes =n-1
        for(j=0;j<n-pass;j++)
            if (a[j]>a[j+1]) {//sorting in ascending order
                //swapping the values
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }

    cout<<"Sorted array is: \n";
    for(i=0;i<n;i++)
        cout<<a[i]<<"\t";
    return 0;
}
