#include<bits/stdc++.h>
using namespace std;
int rotateArray(int arr[], int d, int n){
    d= d%n;
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 4;
    rotateArray(arr, d, n);
    return 0;
}