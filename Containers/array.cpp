#include<iostream>
#include<array>

#define loop(i, a, b) for(int i=a; i<b; i++) 
#define loop2(a, b) for(int i=a; i<b; i++) 

using namespace std;

int main()
{
    array<int,4> a = {1,2,3,4};

    //FIRST WAY OF PRINTING ARRAY
    // for(int i=0;i<4;i++)
    //     cout<<a[i]<<" ";

    //SECOND WAY OF PRINTING ARRAY
    // loop(i,0,4)
    //     cout<<a[i]<<" ";

    //THIRD WAY OF PRINTING ARRAY
    // loop2(0,4)
    //     cout<<a[i]<<" ";

    //FOURTH WAY OF PRINTING ARRAY
    //RANGE BASED LOOP 
    for(auto i : a)
        cout<<i<<" ";

    cout<<"\n";
    return 0;
}
