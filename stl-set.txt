#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main()
{
   std::set<int,std::greater<>> s = {1,5,3,2,4,5,1,2,3,4,5};
    for(auto & e:s){
        cout<<e<<endl;
    }
   return 0;
}
