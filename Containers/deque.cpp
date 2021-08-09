#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(0);

    cout<<"First Element :"<<d.front()<<"\n";

    //FIRST WAY TO PRINT DEQUE
    // for(int i=0;i<4;i++)
    //     cout<<d[i]<<" ";

    //SECOND WAY TO PRINT DEQUE
    // for(auto i:d)
    //     cout<<i<<" ";

    //THIRD WAY TO PRINT DEQUE
    // deque<int> :: iterator it;
    // for(it=d.begin();it!=d.end();it++)
    //     cout<<*it<<" ";

    cout<<"\n";
    return 0;
}
