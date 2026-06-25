#include<bits/stdc++.h>
using namespace std;
bool practice(string &s, int i){
    if(i>=s.size()/2) return true;
    if(s[i] != s[s.size()-i-1]) return false;
    practice(s,i+1);
}
int main(){
    string s= "madam";
    cout<<practice(s,0);
    return 0;
}