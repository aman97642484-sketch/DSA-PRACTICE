#include<bits/stdc++.h>
using namespace std;
//brute force approach
string minWindSub(string s, string t) {
    int minLen = INT_MAX;
    int sindx = -1;
    for(int i = 0; i < s.length(); i++){
           vector<int> freq(256, 0);
           int count = 0;
              for(int j = i; j < s.length(); j++){
                  freq[s[j]]++;
              }
              for(int j = 0; j < t.length(); j++){
                 if(freq[t[j]] > 0){
                     freq[t[j]]--;
                 }
                 else{
                     break;
                 }
                 if(count == t.length()){
                     if(minLen > (j - i + 1)){
                         minLen = j - i + 1;
                         sindx = i;
                     }
                 }
              }
    }
    return minLen == INT_MAX ? "" : s.substr(sindx, minLen);
}
int main(){
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << minWindSub(s, t) << endl;
    return 0;
}