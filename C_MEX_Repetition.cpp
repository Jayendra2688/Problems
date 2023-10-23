#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n+1);
        vector<int>vis(n+1,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
            vis[v[i]]=1;
        }
        for(int i=0;i<=n;i++){
            if(vis[i]==0){
                v[n]=i;
                
                break;
            }
        }
        int n1 = n+1;
        k = k%n1;
        vector<int>v2(n+1,0);
        for(int i=0;i<=n;i++){

            v2[(i+k)%n1] = v[i];
            // cout<<v[i]<<endl;
        }
        for(int i=0;i<n;i++){
            cout<<v2[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}