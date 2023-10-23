#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int  t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        int ans = 0;
        for(int i=0;i<n-1;i++){
            ans=max(v[i+1]-v[i]+v[n-1]-v[i],ans);
        }
        for(int i=n-1;i>0;i--){
            ans=max(v[i]-v[i-1]+v[i]-v[0],ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}