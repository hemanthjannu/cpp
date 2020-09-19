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
            cout<<"Inside constructor\n"<<endl;
        }
        ~car()
        {
            cout<<"Inside destructor\n"<<endl;
        }
};

int main()
{
    car c1,c2,c3;

    return 0;
}
