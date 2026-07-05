#include<bits/stdc++.h>
using namespace std;
void constantWindow(vector<int> v, int n, int k){
   int l =0, r= k-1;
   int maxSum = 0;
    while(r<n){
        int sum = 0;
        for(int i=l; i<=r; i++){
            sum += v[i];
        }
        maxSum = max(maxSum, sum);
        l++;
        r++;
    }
    cout <<"Max Sum: "<< maxSum << endl;
}
int main(){
    vector<int> v = {-1, 2, 3, 4, 5, 1};
    int n = v.size();
    int k = 3;
    constantWindow(v, n, k);
    return 0;
}