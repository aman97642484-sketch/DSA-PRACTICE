#include<bits/stdc++.h>
using namespace std;
//brute force approach
void noOfSubstringbrute(string str, int n){
    int count = 0;
    for(int i=0;i<n;i++){
        int hash[3] = {0};
        for(int j=i;j<n;j++){
           hash[str[j] - 'a'] =1;
           if(hash[0]+hash[1]+hash[2] == 3){
               count = count + (n-j);
               break;
           }
        }
    }
    cout<<count<<endl;
}

//optimal approach
void noOfSubstringopt(string str, int n){
    int lastseen[3] = {-1,-1,-1};
    int count = 0;
    for(int i=0;i<n;i++){
        lastseen[str[i] - 'a'] = i;
        if(lastseen[0] != -1 && lastseen[1] != -1 && lastseen[2] != -1){
            int minIndex = min(lastseen[0], min(lastseen[1], lastseen[2]));
            count += (minIndex + 1);
        }
    }
    cout<<count<<endl;
}

int main(){
    string str = "abcabc";
    int n = str.length();
    noOfSubstringbrute(str, n);
    noOfSubstringopt(str, n);
    return 0;
}