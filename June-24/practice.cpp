#include<bits/stdc++.h>
using namespace std;
int twoSum(int arr[], int t, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == t) {
                return {i,j};
            };
        }
    }
    return {};
}

int main(){
    int arr[] = {2,6,7,8,11};
    int target =9;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<twoSum(arr, target,n);
    return 0;
}