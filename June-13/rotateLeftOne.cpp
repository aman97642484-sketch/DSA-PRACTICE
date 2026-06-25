#include<bits/stdc++.h>
using namespace std;
void LeftRotate(int arr[], int n){
    int temp = arr[0];
    for(int j=1;j<n;j++){
        arr[j-1] = arr[j];
    }
    arr[n-1] = temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}   
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"After one left rotation: ";
    LeftRotate(arr, n);
    return 0;
}