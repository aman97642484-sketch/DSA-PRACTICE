#include<bits/stdc++.h>
using namespace std;
//Using 2 variables
void reverseArr1(int arr[], int st, int end){
    if(st>=end) return;
    swap(arr[st], arr[end]);
    reverseArr1(arr,st+1,end-1);
    
}

void reverseArr2(int arr[], int i, int n){
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArr2(arr,i+1,n);
}
int main(){
    int n;
    cout<<"Enter a value: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    // reverseArr1(arr,0,n-1);
    reverseArr2(arr,0,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
} 