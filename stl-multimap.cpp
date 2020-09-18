#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
   std::multimap<char,int> mm;
   mm.insert(make_pair('a',1));
   mm.insert(make_pair('b',2));
   mm.insert(make_pair('c',3));
   mm.insert(make_pair('a',2));
   mm.insert(make_pair('a',1));


    for(auto & e:mm){
        cout<<e.first<<" " <<e.second<<endl;
    }
    cout<<endl;
    auto r = mm.equal_range('a');

    for(auto i=r.first;i!=r.second;++i){
        cout<<i->first<<" "<<i->second<<endl;
    }
   return 0;
}
