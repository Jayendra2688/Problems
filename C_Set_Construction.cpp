#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>indeg(n,0);
        vector<int>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]=='1'){
                    adj[i].push_back(j);
                    indeg[j]++;
                }
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indeg[i]==0)
            q.push(i);
        }
        map<int,set<int>>mp;
        for(int i=0;i<n;i++){
            mp[i].insert(i+1);
        }
        while(!q.empty()){
            int node = q.front();
            // mp[node].insert(node+1);
            q.pop();
            for(int j=0;j<n;j++){
                if(v[node][j]=='1'){
                    for(auto val : mp[node]){
                        mp[j].insert(val);
                    }
                    indeg[j]--;
                    if(indeg[j]==0){
                        q.push(j);
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<mp[i].size()<<" ";
            for(auto val :  mp[i]){
                cout<<val<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}