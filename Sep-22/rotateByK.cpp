#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int n = v.size();
    int k = 2;
    k = k % n;

    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        ans[(i + k) % n] = v[i];
    }

    for (int x : ans)
    {
        cout << x << " ";
    }
}