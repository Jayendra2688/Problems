#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
#define ll long long
ll dp[N][2];

ll solve(int i,int f,vector<int>&v){
    if(i>=v.size())
    return 0;
    if(dp[i][f]!=-1)
    return dp[i][f];
    ll ans = 0;
    if(f){
    //  cout<<"HI"<<endl;
    ans = max(ans,v[i]+solve(i+1,f,v));
    ans = max(ans,v[i]+solve(i+2,f,v));
    ans= max(ans,solve(i+1,0,v));
    }else{
        ans= max(ans,solve(i+1,f,v));
        ans= max(ans,solve(i+1,1,v));
    }
    return dp[i][f]=ans;
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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        memset(dp,-1,sizeof(dp));
        // cout<<"HI"<<endl;
        cout<<solve(0,1,v)<<endl;
        
    }
    return 0;
}