#include<bits/stdc++.h>
using namespace std;
int constWindow(vector<int>& v, int k){
    int n = v.size();
    int maxSum = INT_MIN;
    for(int i=0; i<=n-k; i++){
        int sum = 0;
        for(int j=i; j<i+k; j++){
            sum += v[j];
        }
        maxSum = max(maxSum, sum);
    }   
    return maxSum;
}
int main(){
    vector<int> v = {1,12,-5,-6,50,3};
    int k =4;
    cout<<constWindow(v, k);
}