#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v= {10, 5, 20, 8, 15};
    int n = v.size();
    int max1= -1;
    int max2 =-1;
    for(int i =0;i<n;i++){
        if(v[i] > max1){
            max2 = max1;
            max1 = v[i];
        }
        else if(v[i] < max1 && v[i] > max2){
            max2 = v[i];
        }
    }
    cout<<max2;
    return 0;
}