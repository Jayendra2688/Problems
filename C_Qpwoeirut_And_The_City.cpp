#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll i,vector<ll>&v1,vector<ll>&dp){
    if(i>=v1.size())
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    ll ans = 0;
    if(i%2==0){
        ans = min((1LL*v1[i]+solve(i+2,v1,dp)),solve(i+1,v1,dp));
    }else{
        ans = 1LL*v1[i]+solve(i+2,v1,dp);
    }
    return dp[i]=ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>v1;
        for(ll i=1;i<n-1;i++){
            if(max(v[i-1],v[i+1])<v[i])
            v1.push_back(0);
            else
            v1.push_back(max(v[i-1],v[i+1])-v[i]+1);
        }
        ll ans = 0; 
        if(v1.size()%2==1){
            for(ll i=0;i<v1.size();i++){
                if(i%2==0)
                ans+=v1[i];
            }
            cout<<ans<<endl;
        }else{
            vector<ll>dp(v1.size()+2,-1);
            cout<<solve(0,v1,dp)<<endl;
        }
    }
    return 0;
}