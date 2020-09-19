#include<iostream>
using namespace std;

class time
{
    private:
        int h,m;
    public:
        void gettime()
        {
            cout<<"Enter time: "<<endl;
            cin>>h;
            cout<<"enter minutes: "<<endl;
            cin>>m;
        }
        void disp()
        {
            cout<<"Time: "<<h<<endl;
            cout<<"minutes: "<<m<<endl;
        }
        time addt(time t1,time t2)
        {
            time t4;
            t4.h=t1.h+t2.h;
            t4.m=t1.m+t2.m;
            return t4;
        }
};

int main()
{
    time t1,t2,t3,r;
    t1.gettime();
    t2.gettime();
    t1.disp();
    t2.disp();

    r = t3.addt(t1,t2);
    r.disp();

}
