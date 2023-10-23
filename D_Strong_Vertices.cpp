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
        vector<int>a(n+1);
        vector<int>b(n+1);
        for(int i=1;i<=n;i++)
        cin>>a[i];
        for(int i=1;i<=n;i++)
        cin>>b[i];
        vector<pair<int,int>>vp;
        int maxi = INT_MIN;
        for(int i=1;i<=n;i++){
            vp.push_back({a[i]-b[i],i});
            maxi = max(maxi,a[i]-b[i]);
        }
        vector<int>ans;
        sort(vp.begin(),vp.end(),greater<pair<int,int>>());
        for(auto val : vp){
            if(val.first==maxi)
            ans.push_back(val.second);
            else
            break;
        }
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        for(auto val : ans){
            cout<<val<<" ";
        }
        cout<<endl;

    }
    return 0;
}