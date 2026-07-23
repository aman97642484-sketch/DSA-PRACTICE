#include <bits/stdc++.h>
using namespace std;
// Using while loop
int binarySearch(vector<int> &v, int n, int target)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
            return mid;
        else if (target > v[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Using recursion
int binarySearchUsingRescursion(vector<int> &v, int low, int high, int n, int target)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (v[mid] == target)
        return mid;
    if (target > v[mid])
    {
        binarySearchUsingRescursion(v, mid + 1, high, n, target);
    }
    else
    {
        binarySearchUsingRescursion(v, low, mid - 1, n, target);
    }
}

int main()
{
    vector<int> v = {3, 4, 6, 7, 9, 12, 16, 17};
    int n = v.size();
    int target;
    cout << "Enter the target value : ";
    cin >> target;
    cout << binarySearch(v, n, target)<<endl;
    cout << binarySearchUsingRescursion(v, 0, n - 1, n, target);
    return 0;
}