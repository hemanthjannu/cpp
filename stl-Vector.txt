#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
   std::vector<int> vec;
   std::vector<int> vec1(5,20);
   std::vector<int> vec2={1,2,3,4,5};
   std::vector<int> vec3{5,6,7,8,9};

   vec1[1]=10;
   vec1.at(2)=10;

   cout<<vec1[1]<<endl;
   cout<<vec1.at(10)<<endl;

   return 0;
}
