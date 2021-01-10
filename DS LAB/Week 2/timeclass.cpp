#include <iostream>
using namespace std;
class time {

    int hour,mins,sec;
    
    public:
        void getdata(int h, int m, int s) {
            hour=h;
            mins=m;
            sec=s;
        }

        void addtime(time t1, time t2) {
            sec=t1.sec+t2.sec;
            mins=t1.mins+t2.mins+sec/60;
            sec=sec%60;
            hour=t1.hour+t2.hour+mins/60;
            mins=mins%60;
        }

        void diff(time t1, time t2) {
            int s1,s2;
            s1=t1.hour*3600+t1.mins*60+t1.sec;
            s2=t2.hour*3600+t2.mins*60+t2.sec;
            if(s1>s2) {
                hour=(s1-s2)/3600;
                mins=((s1-s2)%3600)/60;
                sec=((s1-s2)%3600)%60;
            }
            else  {
                cout<<"Subtraction not possible\n";
                hour=mins=sec=0;
            }
        }

        void display() {
            cout<<"Hours="<<hour<<" Minutes="<<mins<<" Seconds="<<sec<<"\n";
        }
};

int main() {

    int h,m,s;
    cout<<"Enter time 1 in hrs, min, sec: ";
    cin>>h>>m>>s;
    
    time t1,t2,t3,t4;
    t1.getdata(h,m,s);
    
    cout<<"Enter time 2 in hrs, min, sec: ";
    cin>>h>>m>>s;
    
    t2.getdata(h,m,s);
    t3.addtime(t1,t2);
    t4.diff(t1,t2);
    
    cout<<"Sum of times: \n";
    t3.display();
    cout<<"Difference of times: \n";
    t4.display();
    return 0;
}
