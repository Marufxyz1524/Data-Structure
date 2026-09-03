#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adl[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adl[a].push_back(b);
        adl[b].push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << "->";
        for (int x : adl[i])
        {
            cout << x << " ";
                }
    }

    return 0;
}