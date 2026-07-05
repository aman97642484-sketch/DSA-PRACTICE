#include<bits/stdc++.h>
using namespace std;
//brute force approach
int subArrayBrute(vector<int> v, int n, int k){
    int maxLen = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += v[j];
            if(sum <= k){
                maxLen = max(maxLen, j-i+1);
            } else if(sum > k){
                break;
            }
        }
    }
    cout <<"Max Length: "<< maxLen << endl;
}

//sliding window approach
void subArraySliding(vector<int> v, int n, int k){
    int l=0, r=0, sum=0, maxLen=0;
    while(r<n){
        sum +=v[r];
        if(sum> k){
            sum -= v[l];
            l++;  
        }
        if(sum <= k){
            maxLen = max(maxLen, r-l+1);
        }
        r++;
    }
    cout <<"Max Length: "<< maxLen << endl;
}

int main(){
    vector<int> v  = {2,5,1,2,4,7,10};
    vector<int> v2  = {2,5,1,10,10};

    int n = v.size();
    int n2 = v2.size();
    int k=15;
    subArrayBrute(v, n, k);
    subArraySliding(v2, n2, k);
}