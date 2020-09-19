#include<iostream>
using namespace std;

class car
{
private:
    long int price;
    float mileage;
    public:
        void setdata()
        {
            cout<<"Enter price: ";
            cin>>price;
            cout<<"Enter mileage: ";
            cin>>mileage;
        }
        void diplaydata()
        {
            cout<<"price: "<<price<<endl;
            cout<<"mileage: "<<mileage<<endl;
        }
};

int main()
{
    car c1;
    c1.setdata();
    c1.diplaydata();
    return 0;
}
