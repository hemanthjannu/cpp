#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter first name: ";
    cin>>str1;
    cout<<"Enter last name: ";
    cin>>str2;

    string str=str1+ " " + str2;

    cout<<str<<endl;


    return 0;
}
