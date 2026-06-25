// C++ program to check if an array is sorted or not
#include<bits/stdc++.h>
using namespace std;

bool Sorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] >= arr[i-1]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int arr[] = {1, 2, 5, 4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(Sorted(arr, n)){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}