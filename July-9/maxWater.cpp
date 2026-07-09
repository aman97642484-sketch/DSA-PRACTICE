#include<bits/stdc++.h>
using namespace std;
int maxWater(vector<int> &v, int n){
    int w=0, maxarea = -1;
    for(int l=0;l<n-1;l++){
        for(int r=l+1;r<n;r++){
            int h = min(v[l], v[r]);
            w= r-l;
            int currarea = h*w;
            maxarea = max(maxarea, currarea);
        }
    }
    return maxarea;
}

int main(){
    vector<int> v= {1,8,6,2,5,4,8,3,7};
    int n = v.size();
    cout<<"Max Area : "<<maxWater(v, n);
    return 0;
}