// Highest Element in an array
#include <bits/stdc++.h>
using namespace std;
int highestElement(int arr[], int n, int ans)
{
    for (int j = 1; j < n; j++)
    {
        if (arr[ans] < arr[j])
        {
            ans = j;
        }
    }
    return arr[ans];
}

int lowestElement(int arr[], int n, int ans)
{
    for (int j = 1; j < n; j++)
    {
        if (arr[ans] > arr[j])
        {
            ans = j;
        }
    }
    return arr[ans];
}

int secLargest(int arr[], int n, int largest)
{
    int slargest = -1;
    for (int j = 1; j < n; j++)
    {
        if (arr[largest] < arr[j])
        {
            slargest = largest;
            largest = j;
        }
        else if (arr[largest] != arr[j] && arr[j] > arr[slargest])
        {
            slargest = j;
        }
    }
    return arr[slargest];
}
int main()
{
    int arr[] = {100, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = 0;

    cout << "Highest value is " << highestElement(arr, n, ans) << endl;
    cout << "Lowest value is " << lowestElement(arr, n, ans) << endl;
    cout << "Second Largest value is " << secLargest(arr, n, ans);



    return 0;
}