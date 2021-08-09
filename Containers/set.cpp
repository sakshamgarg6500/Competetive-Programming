#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(0);
    s.insert(6);
    s.insert(2);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    
    // for(auto i:s)
    //     cout<<i<<" ";

    // cout<<"Size of set :"<<s.size();

    // set<int> :: iterator it;
    // for(it=s.begin();it!=s.end();it++)
    //     cout<<*it<<" ";

    // cout<<"Whether 4 is present or not :"<<s.count(4);
    // cout<<"Maximum elements that set can hold :"<<s.max_size();

    set<int> :: iterator it;
    it = s.find(12);
    cout<<*it;

    cout<<"\n";
    return 0;
}
