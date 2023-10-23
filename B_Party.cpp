#include<bits/stdc++.h>
using namespace std;
void DFS(int i,vector<int>adj[],vector<int>&indeg,vector<int>&vis,vector<int>&unhappy,int &ans){
    vis[i]=1;
    if(indeg[i]%2==1){
        ans=  min(ans,unhappy[i]);
    }
    for(auto val : adj[i]){
        if(indeg[i]%2==0 && indeg[val]%2==0){
            ans = min(ans,unhappy[i]+unhappy[val]);
        }
        if(!vis[val])
        DFS(val,adj,indeg,vis,unhappy,ans);
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>unhappy(n+1);
        for(int i=1;i<=n;i++)
        cin>>unhappy[i];
        vector<int>adj[n+1];
        vector<int>indeg(n+1,0);
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
            indeg[a]++;
            indeg[b]++;
        }
        if(m%2==0)
        cout<<0<<endl;
        else{
            int ans = INT_MAX;
            vector<int>vis(n+1,0);
            for(int i=1;i<=n;i++){
                if(!vis[i])
                DFS(i,adj,indeg,vis,unhappy,ans);
            }
            cout<<ans<<endl;
        }

    }
    return 0;
}