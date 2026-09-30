#include <bits/stdc++.h>
using namespace std;
int missingNum(vector<int> &v, int n){
    int actualSum = 0;
    int expectedSum =0;
    for(int x : v){
        actualSum += x;
    }
    for(int i =1;i<=n;i++){
        expectedSum += i;
    }
    return expectedSum - actualSum;
}
int main(){
    vector<int> v = {1,2,4,5,6};
    int n = 6;

    cout<<missingNum(v, n);

    return 0;
}