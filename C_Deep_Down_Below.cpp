#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<pair<int,int>>&vp,int m){
    int f=1;
    for(int i=0;i<vp.size();i++){
        if(vp[i].first<=m){
            m+=vp[i].second;
        }else{
            f=0;
            break;
        }
    }
    return f;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            int maxi = INT_MIN;
            for(int j=0;j<k;j++){
                int x;
                cin>>x;
                maxi = max(x+1-j,maxi);
            }
            vp.push_back({maxi,k});
            // cout<<maxi<<" "<<k<<endl;
        }
        sort(vp.begin(),vp.end());
        int l = vp[0].first;
        int h = vp[n-1].first;
        int ans = -1;
        while(l<=h){
            int m = l + (h-l)/2;
            if(isPossible(vp,m)){
                ans=m;
                h=m-1;
            }else{
                l=m+1;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}