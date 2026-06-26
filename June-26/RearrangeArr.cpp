#include <bits/stdc++.h>
using namespace std;
//Brute Force Approach
void reArrange(int arr[], int n)
{
    int pos[n / 2], neg[n / 2];
    int p = 0, q = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            pos[p++] = arr[i];
        }
        else
        {
            neg[q++] = arr[i];
        }
    }
    for (int i = 0; i < n / 2; i++)
    {
        arr[i * 2] = pos[i];
        arr[i * 2 + 1] = neg[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

//Optimal Approach
void reArrangeOptimal(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        while (arr[i] >= 0 && i < j)
            i++;
        while (arr[j] < 0 && i < j)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    int pos = 0, neg = i;
    while (pos < n && neg < n && arr[pos] >= 0)
    {
        swap(arr[pos], arr[neg]);
        pos += 2;
        neg++;
    }
}  

//using vector
void reArrangeOptimalVector(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n,0);
    int pos=0, neg=1;
    for(int i=0;i<n;i++){
        if(arr[i] <0){
            ans[neg] = arr[i];
            neg += 2;
        }
        else{
            ans[pos] = arr[i];
            pos += 2;
        }
    }
    arr = ans;
}
int main()
{
    int arr[] = {3, 1, -2, -5, 2, -4};
    vector<int> arrVec = {3, 1, -2, -5, 2, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    reArrange(arr, n);
    cout << "After rearranging";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reArrangeOptimal(arr, n);
    cout << "After rearranging";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    reArrangeOptimalVector(arrVec);
    cout << "After rearranging";
    for (int i = 0; i < n; i++)
    {
        cout << arrVec[i] << " ";
    }
    cout << endl;
    return 0;
}