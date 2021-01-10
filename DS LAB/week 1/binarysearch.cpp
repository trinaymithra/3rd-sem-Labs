#include <iostream>
using namespace std;

int main() {

    int a[10],n,key,i,flag=0,low,high,mid;
    
    cout<<"Enter the array size: ";
    cin>>n;
    
    cout<<"Enter "<<n<<" elements :";
    for (i=0;i<n;i++)
        cin>>a[i];
    
    cout<<"Enter the key to be searched: ";
    cin>>key;
    
    low=0,high=n-1;//binary search
    while(low<=high) {

        mid = (low+high)/2;
        if (a[mid]==key) {
            flag=1;
            cout<<"Key found at "<<mid+1<<"th position";
            break;
        }

        else if (a[mid]<key)//key might be there in second half
            low=mid+1;

        else//a[mid]>key => key might be present in the first half
            high=mid-1;
    }
    
    if (flag==0)
        cout<<"Key not found";
    return 0;
}
