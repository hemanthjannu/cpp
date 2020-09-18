#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
   std::map<string,int> m;
   m["hemanth"]=12345;
   m["jannu"]=57845;
   m["apple"]=87945;
   m.insert(std::make_pair("ban",45343));

    for(auto & e:m){
        cout<<e.first<<" " <<e.second<<endl;
    }
   return 0;
}
