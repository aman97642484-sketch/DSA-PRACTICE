#include<bits/stdc++.h>
using namespace std;
bool jumpGame(vector<int>& v, int n){
    int maxIdx = 0;
    for(int i=0;i<n;i++){
        if(i> maxIdx) return false;
        maxIdx = max(maxIdx, i+v[i]);
    }
    return true;
}
int main(){
    vector<int> v = {3,2,1,0,4};
    int n = v.size();
    cout<<jumpGame(v, n);
    return 0;
}