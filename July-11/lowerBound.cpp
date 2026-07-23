#include <bits/stdc++.h>
using namespace std;
int lowerBound(int arr[], int target, int n)
{
    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[]{1, 2, 3, 3, 7, 8, 9, 9, 9, 11};
    int target = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << lowerBound(arr, target, n);
    return 0;
}