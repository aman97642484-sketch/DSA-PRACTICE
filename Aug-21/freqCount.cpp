#include <bits/stdc++.h>
using namespace std;
void freqCount(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.first << "->" << it.second<<endl;
    }
}
int main()
{
    int arr[] = {1, 2, 2, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    freqCount(arr, n);
    return 0;
}