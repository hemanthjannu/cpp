#include<iostream>
using namespace std;

class car
{
public:
    int m,p;
    void getdata()
    {
        cout<<"enter price: "<<endl;
        cin>>p;
        cout<<"enter mileage: "<<endl;
        cin>>m;
    }
    void displaydata()
    {
        cout<<"price: "<<p<<endl;
        cout<<"mileage: "<<m<<endl;
    }

};

int main()
{
    car c1;
    c1.p=40004;
    c1.m=20;
    cout<<c1.p<<" "<<c1.m<<endl;

    return 0;
}
