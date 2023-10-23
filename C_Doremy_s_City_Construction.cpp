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
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int ans = n/2;
        int left = 0;
        for(auto val : mp){
            ans=max(left*(n-left),ans);
            left+=val.second;
        }
        cout<<ans<<endl;
    }
    return 0;
}