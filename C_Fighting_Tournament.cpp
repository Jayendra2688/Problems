#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        map<int,int>mp;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v[i]=x;
            mp[i+1]=x;
        }
        int maxi = v[0];
        vector<int>v1;
        for(int i=1;i<n;i++){
            maxi=max(maxi,v[i]);
            v1.push_back(maxi);
        }
        while(q--){
            int id,r1;
            cin>>id>>r1;
            int ans = 0;
            if(r1>(n-1)){
                int l = lower_bound(v1.begin(),v1.end(),mp[id])-v1.begin();
                int u = upper_bound(v1.begin(),v1.end(),mp[id])-v1.begin();
                if(mp[id]==n){
                    cout<<(u-l)+(r1-(n-1))<<endl;
                }else{
                    cout<<(u-l)<<endl;
                }
            }else{
                int l = lower_bound(v1.begin(),v1.begin()+=r1,mp[id])-v1.begin();
                int u = upper_bound(v1.begin(),v1.begin()+=r1,mp[id])-v1.begin();
                cout<<(u-l)<<endl;
                // cout<<l<<" "<<u<<endl;
            }
            
        }
    }
    return 0;
}