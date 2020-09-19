#include<iostream>
using namespace std;

class car
{
    private:
        int price;
        float mileage;
    public:
        car()
        {
            price=0;
            mileage=0;
            cout<<"Default constructor\n"<<endl;
        }
        car(int x,float y)
        {
            price = x;
            mileage = y;
            cout<<"Parameterised constructor\n"<<endl;
        }
        car(car &x)
        {
            price=x.price;
            mileage=x.mileage;
            cout<<"copy constructor\n"<<endl;
        }

};

int main()
{
    car c1;
    car c2(5000,45);
    car c3(c2);

    return 0;
}
