#include<bits/stdc++.h>
using namespace std;
   long long powe(long long n,long long x){
    long long ans = 1;
    for(long long i=0;i<x;i++)
    ans = ans*n;
    return ans;
}
int solve(long long i,long long n,long long x,vector<vector<int>>&dp){
    if(n==0)
    return 1;
    if(dp[i][n]!=-1)
        return dp[i][n];
    if(powe(i,x)<=n){
        return dp[i][n]= solve(i+1,n-powe(i,x),x,dp) + solve(i+1,n,x,dp);
    }else
    return dp[i][n]=0;

}
    int numberOfWays(int n, int x) {
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(1,n,x,dp);
    }
int main(){
    // cout<<powe(2,3)<<endl;
     cout<<numberOfWays(4,1)<<endl;
    return 0;
}