#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+6;
int dp[2*N];
int solve(int i,vector<int>&v){
    if(i==v.size())
    return 0;
    if(i>v.size())
    return 1e9;
    if(dp[i]!=-1)
    return dp[i];
    int ans = 1e9;
    ans = min(ans,solve(i+1+v[i],v));
    ans = min(ans,1+solve(i+1,v));
    return dp[i]=ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        memset(dp,-1,sizeof(dp));
        cout<<solve(0,v)<<endl;
    }
    return 0;
}