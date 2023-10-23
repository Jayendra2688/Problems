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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        vector<int>pre(n,INT_MIN);
        vector<int>suff(n,INT_MIN);
        for(int i=1;i<n;i++)
        pre[i]=max(pre[i-1],v[i-1]);
        for(int i=n-2;i>=0;i--)
        suff[i]=max(suff[i+1],v[i+1]);
        long long ans=0;
        for(int i=0;i<n;i++){
            ans+=max(v[i],min(pre[i],suff[i]));
        }
        cout<<ans<<endl;
    }
    return 0;
}