#include<bits/stdc++.h>
using namespace std;
// for vector
void rotateRight(vector<int>& arr, int n, int k){
    k = k % n; // In case k is greater than n;
    reverse(arr.begin(), arr.end()); // Reverse the whole array
    reverse(arr.begin(), arr.begin() + k); // Reverse the first k elements
    reverse(arr.begin() + k, arr.end()); // Reverse the remaining n-k elements
}
//for array
void rotateRight(int arr[], int n, int k){
    k = k % n; // In case k is greater than n;
    reverse(arr, arr + n); // Reverse the whole array
    reverse(arr, arr + k); // Reverse the first k elements
    reverse(arr + k, arr + n); // Reverse the remaining n-k elements
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    vector<int> v = {1,2,3,4,5,6,7};
    int k=3;
    int n = sizeof(arr)/sizeof(arr[0]);
    rotateRight(v, n, k);
    rotateRight(arr, n, k);
    cout<<"Vector: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}