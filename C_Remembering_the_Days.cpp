#include<bits/stdc++.h>
using namespace std;
void dfs(int v,int curr,int &ans,vector<int>&vis,vector<pair<int,int>>adj[]){
    vis[v]=1;
    ans = max(ans,curr);
    for(int i=0;i<adj[v].size();i++){
        int node = adj[v][i].first;
        int edge = adj[v][i].second;
        if(!vis[node]){
            dfs(node,curr+edge,ans,vis,adj);
        }
    }
    vis[v]=0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,e;
    cin>>n>>e;
    vector<pair<int,int>>adj[n+1];
    for(int i=0;i<e;i++){
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }
    vector<int>vis(n+1,0);
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,0,ans,vis,adj);
        }
    }
    cout<<ans<<endl;
    return 0;
}