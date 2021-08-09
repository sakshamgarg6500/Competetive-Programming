#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int> q;

    q.push(10);
    q.push(2);
    q.push(15);

    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }

    cout<<"\n";
    return 0;
}
