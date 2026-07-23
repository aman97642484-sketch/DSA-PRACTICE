#include <bits/stdc++.h>
using namespace std;
// if arr is sarting with one
int rotateCount1(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            return i;
            break;
        }
    }
    return 0;
}

int rotateCount2(vector<int> &arr, int n)
{
    int minIndx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[minIndx])
            minIndx = i;
    }
    return minIndx;
}

int rotateCountOptimal(vector<int> &arr, int n)
{
    int minindx = 0;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        if (arr[low] <= arr[high])
        {
            return 0;
        }

        int mid = (low + high) / 2;
        // left sorted
        if (arr[low] <= arr[mid])
        {
            minindx = min(arr[minindx], arr[low]);
            low = mid + 1;
        }

        else
        {
            minindx = min(arr[minindx], arr[mid]);
            high = mid - 1;
        }
    }
    return minindx;
}

int main()
{
    vector<int> v = {6, 7, 8, 9, 1, 2, 3, 4, 5};
    int n = v.size();
    cout << "Array is rotated " << rotateCount1(v, n) << " times"<<endl;
    cout << "Array is rotated " << rotateCount2(v, n) << " times"<<endl;
    cout << "Array is rotated " << rotateCountOptimal(v, n) << " times";

    return 0;
}
