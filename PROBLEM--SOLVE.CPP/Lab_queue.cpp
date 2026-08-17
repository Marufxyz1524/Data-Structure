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

    int fornt()
    {
        return v.front();
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
    q.push(30);

    q.push(40);
    q.push(50);

    while (!q.empty())
    {
        cout << q.fornt() << "  ";
        q.pop();
    }
    return 0;
}