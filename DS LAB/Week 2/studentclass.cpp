#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class student {
    char name[50],grade;
    int rollno;

    public:
        void getdata(char a[],char g, int roll) {
            strcpy(name,a);
            grade=g;
            rollno=roll;
        }

        void displaydata() {
            cout<<"\nRoll num. = "<<rollno<<"\nName: ";
            puts(name);
            cout<<"Grade = "<<grade <<"\n";
        }

        void sort(student arr[], int n) {//sorting the data according to the roll numbers in the ascending order
            int pass,b;
            student s1;

            for(pass=1;pass<n;pass++)
                for(b=0;b<n-pass;b++)
                    if(arr[b].rollno>arr[b+1].rollno) {
                        s1=arr[b];
                        arr[b]=arr[b+1];
                        arr[b+1]=s1;
                    }
        }
};

int main() {
    int n,i,num;
    char names[50],gr;
    student s[10];

    cout<<"Enter number of students: (max 10)";
    cin>>n;

    cout<<"Enter name, grade(in character) and roll number of students: \n";
    for(i=0;i<n;i++) {
        cout<<"Student "<<i+1 <<" details:\n";
        fflush(stdin);
        gets(names);
        cin>>gr;
        cin>>num;
        s[i].getdata(names,gr,num);
    }

    s[0].sort(s,n);
    
    cout<<"Data sorted according to the roll numbers is: \n";
    for(i=0;i<n;i++)
        s[i].displaydata();
    return 0;
}
