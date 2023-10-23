#include<bits/stdc++.h>
using namespace std;
int dp[200005];
int solve(int i,const string &s){
    int n = s.length();
    if(i==n)
    return 0;

    if(i==n-1)
    return 1;
    if(dp[i]!=-1)
    return dp[i];
    if(s[i]==s[i+1])
    return dp[i]=solve(i+2,s);
    else{
        int j;
        for(j=i+1;j<n;j++){
            if(s[j]==s[i])
            break;
        }
        if(j==n){
            return dp[i]=1+solve(i+1,s);
        }else{
            return dp[i]=min((j-i-1)+solve(j+1,s),1+solve(i+1,s));
        }
    }
    return 0;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        memset(dp,-1,sizeof(dp));
        string s;
        cin>>s;
        cout<<solve(0,s)<<endl;
    }
    return 0;
}