#include <bits/stdc++.h>
using namespace std;

// Brute force approach
void peakElement(vector<int> arr, int n)
{
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1]))
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}

// optimized approach
int peakElementOptimized(vector<int> arr, int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (arr[0] >= arr[1])
    {
        return 0;
    }
    if (arr[n - 1] >= arr[n - 2])
    {
        return n - 1;
    }
    int low = 1, high = n - 2;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= arr[mid - 1] && arr[mid] >= arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid - 1] > arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1};
    int n = arr.size();
    peakElement(arr, n);
    cout << peakElementOptimized(arr, n) << endl;
    return 0;
}