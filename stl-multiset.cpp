#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main()
{
   std::multiset<int,std::greater<>> ms = {1,5,3,2,4,5,1,2,3,4,5};
    for(auto & e:ms){
        cout<<e<<endl;
    }
   return 0;
}
