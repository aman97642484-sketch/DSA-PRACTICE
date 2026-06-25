#include<bits/stdc++.h>
using namespace std;
int functionalRecursion(int n){
    if(n==0){
        return 0;
    }
    return n+functionalRecursion(n-1);
}
int main(){
    int n;
    cout<<"Enter a value: ";
    cin>>n;
    cout<<"Sum="<<functionalRecursion(n);
    return 0;
}