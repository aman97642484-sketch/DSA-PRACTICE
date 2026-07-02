#include <bits/stdc++.h>
using namespace std;
// optimal Approach
int buyOrSellII(vector<int> &arr, int n)
{
    int profit = 0;
    for(int i=1;i<n;i++){
        if(arr[i-1] < arr[i]){
            int diff = arr[i] - arr[i-1];
            profit+=diff;
        }
    }
    return profit;
}


int main()
{
    vector<int> v = {7, 1, 5, 3, 6, 4};
    int n = v.size();
    cout << "Max Profit Using Optimal Approach: " << buyOrSellII(v, n)<<endl;
    return 0;
}