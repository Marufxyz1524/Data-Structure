#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    vector<int> v;

    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.erase(v.begin());
    }

    int front()
    {

        return v.front();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    myQueue q;

    q.push(10);
    q.push(20);
    q.pop();
    q.push(30);
    q.push(40);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}