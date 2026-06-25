#include<bits/stdc++.h>
using namespace std;
void parameterRecurs(int i, int sum){
    if(i<0) {
        cout<<"Sum="<<sum;
        return;
    }
    parameterRecurs(i-1,sum+i);
}
int main(){
    int n;
    cout<<"Enter a value: ";
    cin>>n;
    parameterRecurs(n,0);
    return 0;
}