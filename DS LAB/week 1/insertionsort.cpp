#include <iostream>
using namespace std;

int main() {

    int a[10],n,i,key,j;
    
    cout<<"Enter the array size: ";
    cin>>n;
    
    cout<<"Enter the elements: ";
    for(i=0;i<n;i++)
        cin>>a[i];
    
    for(i=1;i<n;i++) {//n-1 passes

        key=a[i];//assuming 1st element is sorted and inserting the next elements in the sorted array
        j=i-1;

        while(j>=0 && a[j]>key) {//put the element in the correct position in the sorted part of the array
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }

    cout<<"Sorted array is: \n";
    for(i=0;i<n;i++)
       cout<<a[i]<<"\t";
    return 0;
}

