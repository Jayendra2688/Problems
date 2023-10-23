#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n+1);
        vector<int>l(n+1,1);
        for(int i=1;i<=n;i++){
        cin>>v[i];
        l[v[i]]=0;
        }
        if(n==1){
            l[1]=1;
        }
        vector<int>leaves;
        for(int i=1;i<=n;i++){
            if(l[i]){
                leaves.push_back(i);
            }
        }
        vector<int>vis(n+1,0);
        cout<<leaves.size()<<endl;
        for(auto val : leaves){
            int cur = val;
            vector<int>ans;
            while(!vis[cur]){
                ans.push_back(cur);
                vis[cur]=1;
                if(v[cur]==cur)
                break;
                cur=v[cur];
            }
            reverse(ans.begin(),ans.end());
            cout<<ans.size()<<endl;
            for(auto val : ans){
                cout<<val<<" ";
            }
            cout<<endl;
        }
        // cout<<endl;


    }
    return 0;
}