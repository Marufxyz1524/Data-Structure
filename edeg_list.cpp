#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edl;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edl.push_back({a, b});
    }
    for (pair<int, int> p : edl)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}