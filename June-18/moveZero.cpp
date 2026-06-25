#include <bits/stdc++.h>
using namespace std;
void moveZero(int arr[], int n){
    sort(arr, arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1,2,0,0,5,67,4,6,0,0,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"ans is ";
    moveZero(arr, n);

    return 0;
}