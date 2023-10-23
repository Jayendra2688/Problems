#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ncr(ll n,ll r){
    ll ans = 1;
    for(ll i=1;i<=r;i++){
        ans*=(n-i+1);
        ans/=i;
    }
    return ans;
}
ll fact(ll n){
    ll ans =1;
    for(int i=1;i<=n;i++)
    ans*=i;
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    // cout<<fact(n/2 - 1)<<endl;
    cout<<(ncr(n,n/2)*fact(n/2 - 1)*fact(n/2 - 1)/2)<<endl;
    return 0;
}