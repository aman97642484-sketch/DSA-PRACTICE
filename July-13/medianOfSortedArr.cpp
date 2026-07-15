#include <bits/stdc++.h>
using namespace std;
int MedianOfSortedArr(vector<int> arr1, vector<int> arr2, int n, int m)
{
    vector<int> arr3;
    for (int x : arr1)
    {
        arr3.push_back(x);
    }
    for (int x : arr2)
    {
        arr3.push_back(x);
    }
    sort(arr3.begin(), arr3.end());
    int size = arr3.size();
    if (size % 2 == 1)
    {
        return arr3[size / 2];
    }
    return (arr3[size / 2] + arr3[size / 2 - 1]) / 2;
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {6, 7, 8, 9, 10};
    int n1 = arr1.size();
    int n2 = arr2.size();
    cout << MedianOfSortedArr(arr1, arr2, n1, n2) << endl;
    return 0;
}