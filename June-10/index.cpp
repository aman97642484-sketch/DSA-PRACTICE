#include <bits/stdc++.h>
using namespace std;
int Slargest(int arr[], int n)
{
    int largest = arr[0];
    int slargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int Ssmallest(int arr[], int n)
{
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < ssmallest)
        {
            ssmallest = arr[i];
        }
    }
    return ssmallest;
}

// Array is sorted or not
int sorted(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
        } else
            return false;
    }
    return true;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << "The second largest element is: " << Slargest(arr, n) << endl;
    // cout << "The second smallest element is: " << Ssmallest(arr, n) << endl;
    cout << "The Given array is sorted(1) or not(0) : " << sorted(arr, n) << endl;
    return 0;
}