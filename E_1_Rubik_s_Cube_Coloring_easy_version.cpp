#include<bits/stdc++.h>
using namespace std;
int mod = 1000000007;
long long binaryExpo(long long a,long long b){
    if(b==0){
        return 1;
    }
    long long ans = binaryExpo(a,b/2);
    ans*=ans;
    ans%=mod;
    if(b%2==1){
        ans*=a;
        ans%=mod;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    long long expo = (1LL<<n) -2;
    // cout<<(1<<3)<<endl;
    long long ans = binaryExpo(4,expo);
    ans%=mod;
    ans*=6;
    ans%=mod;
    cout<<ans<<endl;
    return 0;
}