#include<bits\stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int strt = 0;strt<n;strt++){
        for(int end = strt;end<n;end++){
            for(int i=strt; i<=end;i++){
                cout<<arr[i]<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
}