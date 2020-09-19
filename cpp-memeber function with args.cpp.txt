#include<iostream>
using namespace std;

class car
{
    private:
        int m1,m2;
    public:
        setd(int m,int n)
        {
            m1=m;
            m2=n;
            return m1+m2;
        }
        disp()
        {
            cout<<"mark1: "<<m1<<endl;
            cout<<"mark2: "<<m2<<endl;
        }
};

int main()
{
    car c1;
    int m,n,t;
    cout<<"enter m1: ";
    cin>>m;
    cout<<"enter m2: ";
    cin>>n;
    t=c1.setd(m,n);
    cout<<"Total: "<<t<<endl;
    return 0;
}
