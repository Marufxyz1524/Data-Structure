#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(), l.end()); //these are initizlizer

    // //add element front and end
    // l.push_back(40);
    // l.push_front(50);

    // // delete element front and end
    // l.pop_back();
    // l.pop_front();

    // // access any index form list
    //  cout << *next(l.begin(), 2);

    // // insrt at any index
    // l.insert(next(l.begin(), 2), 99);

    // delete at any indx
    l.erase(next(l.begin(), 2));

    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}