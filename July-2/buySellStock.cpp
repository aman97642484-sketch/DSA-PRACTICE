#include <bits/stdc++.h>
using namespace std;
// optimal Approach
int buyOrSell(vector<int> &arr, int n)
{
    int mini = INT_MAX;
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, arr[i]);
        maxProfit = max(maxProfit, arr[i] - mini);
    }
    return maxProfit;
}

// Brute Force Approach
int buyOrSell1(vector<int> &arr, int n)
{
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            maxProfit = max(maxProfit, arr[j] - arr[i]);
        }
    }
    return maxProfit;
}
int main()
{
    vector<int> v = {7, 1, 5, 3, 6, 4};
    int n = v.size();
    cout << "Max Profit Using Optimal Approach: " << buyOrSell(v, n)<<endl;
    cout << "Max Profit Using Brute Force Approach: " << buyOrSell1(v, n);
    return 0;
}