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
        vector<int>vis(n+1,0);
        vis[1]=1;
        int ans =0;
        for(int i=0;i<n-1;i++){
            int e1,e2;
            cin>>e1>>e2;
            if(!vis[e1] && !vis[e2]){
                ans++;
                vis[e1]=1;
                vis[e2]=1;
            }else{
                vis[e1]=1;
                vis[e2]=1;
            }
        }
        cout<<ans+1<<endl;
    }

    return 0;
}
