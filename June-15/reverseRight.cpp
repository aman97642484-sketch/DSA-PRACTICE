#include <bits/stdc++.h>
using namespace std;
void reverseRight(int arr[], int n, int d)
{
    reverse(arr, arr + n);
    reverse(arr+d,arr+n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d;
    cout<<"Enter the value of d : ";
    cin>>d;
    cout << "Reverse Left of one place is ";
    reverseRight(arr, n, d);
    return 0;
}