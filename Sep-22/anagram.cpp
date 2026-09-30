#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    vector<int> freq(26, 0);
    for (char ch : s)
    {
        freq[ch - 'a']++;
    }
    for (char ch : t)
    {
        freq[ch - 'a']--;
    }
    for (int count : freq)
    {
        if (count != 0)
            return false;
    }
    return true;
}

int maxSumSubarray(vector<int> &arr, int k)
{
    int n = arr.size();
    int sum = 0;
    int maxSum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    int left = 0;
    maxSum = sum;
    for (int r = k; r < n; r++)
    {
        sum -= arr[left];
        left++;
        sum += arr[r];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main()
{
    string s = "listen";
    string t = "aman";
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;

    // cout << isAnagram(s, t);
    // cout << maxSumSubarray(arr, k);

    return 0;
}