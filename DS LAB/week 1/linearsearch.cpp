#include <iostream>
using namespace std;

int main() {

    int a[10],n,key,i,flag=0;
    
    cout<<"Enter the array size: ";
    cin>>n;
    
    cout<<"Enter "<<n<<" elements :";
    for (i=0;i<n;i++)
        cin>>a[i];
    
    cout<<"Enter the key to be searched: ";
    cin>>key;
    
    for(i=0;i<n;i++)//search through each element of the array
        if(a[i]==key) {
            flag=1;
            cout<<"Key found at "<<i+1<<"th position";
            break;
        }
        
    if(flag==0)
        cout<<"Key not found";
    return 0;
}
