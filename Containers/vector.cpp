#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    //FIRST WAY TO PRINT VECTOR
    // for(int i=0;i<3;i++)
    //     cout<<v[i]<<" ";

    //SECOND WAY TO PRINT VECTOR
    // for(auto i:v)
    //     cout<<i<<" ";

    //THIRD WAY TO PRINT VECTOR
    // vector<int> :: iterator it;
    // for(it = v.begin(); it!=v.end(); it++)
    //     cout<<*it<<" ";

    //FOURTH WAY TO PRINT VECTOR
    // for(int i=0;i<v.size();i++)
    //     cout<<v[i]<<" ";

    cout<<"\n";
    return 0;
}

