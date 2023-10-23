#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        vector<int>v1(m);
        for(int i=0;i<m;i++){
            cin>>v1[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        int k = 0;
        long long ans = 0;
        for(int i=0;i<n;i++){
            // cout<<"k "<<k<<endl;
            if(k<(v[i])){
                ans+=v1[k++];
            }else{
                ans+=v1[v[i]-1];
            }
            // cout<<ans<<endl;
        }
        cout<<ans<<endl;

    }
    return 0;
}