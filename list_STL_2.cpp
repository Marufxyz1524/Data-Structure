#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> l1 = {1, 2, 3, 4, 5};
    // // list<int> l2(l1);  //copy one another
    // int a[] = {10, 20, 30};
    // list<int> l2(a, a + 3); // copy from array into list

    // same copy from vector::
    vector<int> v1 = {11, 22, 33};
    list<int> l2(v1.begin(), v1.end());

    for (int val : l2)
    {
        cout << val << endl;
    }
    return 0;
}