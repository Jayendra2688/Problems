#include<bits/stdc++.h>
using namespace std;
void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a  = 10;
    cout<<(a&(1<<1))<<endl;
    printBinary(a);
    printBinary((a & ~(1<<1)));
    return 0;
}