#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,int> m;
    m.insert({1,2});
    m.insert({4,8});
    m.insert({2,4});
    
    // for(auto i:m)
    //     cout<<i.first<<" "<<i.second<<"\n";

    // map<int,int> :: iterator it;
    // for(it=m.begin();it!=m.end();it++)
    //     cout<<it->first<<" "<<it->second<<"\n";

    cout<<"\n";
    return 0;
}