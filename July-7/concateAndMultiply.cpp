#include<bits/stdc++.h>
using namespace std;
int concateAndMultiply(int n){
    int sum =0;
    string s= to_string(n);
    long long x= 0;
    for(char ch : s){
        if(ch != '0'){
            int digits = ch - '0';
            sum+=digits;
            x= x*10 + digits;
        }
    }
    return x*sum;
}
int main(){
    int n = 10203004;
    cout<<"Ans : "<<concateAndMultiply(n);
    return 0;
}
