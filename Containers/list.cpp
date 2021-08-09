#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;

    l.push_front(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    cout<<"Size of list :"<<l.size();

    //FIRST METHOD TO PRINT LIST
    // for(auto i:l)
    //     cout<<i<<" ";

    //SECOND METHOD TO PRINT LIST
    // list<int> :: iterator it;
    // for(it = l.begin(); it!= l.end(); it++)
    //     cout<<*it<<" ";

    cout<<"\n";
    return 0;
}
