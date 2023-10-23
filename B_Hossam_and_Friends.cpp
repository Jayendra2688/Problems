#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    map<int,set<int>>mp;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        mp[min(x,y)].insert(max(x,y));
    }
    ll ans = 0;
    int j = n;
    for(int i=n;i>=1;i--){
        if(mp[i].size()!=0){
            int end = min(j+1,*(mp[i].begin()));
            j=--end;
            // cout<<j<<endl;
        }
        ans+=(j-i+1);
        // cout<<i<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
    }
    return 0;
}