#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v = {1,3,4,0,9,7,6,2,5,8};

    for(auto i:v)
        cout<<i<<" ";

    // sort(v.begin(), v.end()); //ASCENDING
    sort(v.begin(), v.end(), greater<int>()); //DESCENDING

    cout<<"\n";

    for(auto i:v)
        cout<<i<<" ";

    // cout<<"Size of vector :"<<v.size()<<"\n"; //10
    // cout<<"Capacity of vector :"<<v.capacity(); //10

    cout<<"\n";
    return 0;
}