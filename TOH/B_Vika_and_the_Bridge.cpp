#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,vector<int>>mp;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(mp[x].size()==0){
                mp[x].push_back(0);
            }
            mp[x].push_back(i);
        }
        for(auto val : mp){
            mp[val.first].push_back(n+1);
        }
        
        int ans = INT_MAX;
        for(auto val : mp){
            int m1 = INT_MIN;
            int m2 = INT_MIN;
            vector<int>v2 = val.second;
            for(int i=0;i<v2.size()-1;i++){
                int diff = v2[i+1]-v2[i]-1;
                if(diff>m1){
                    m2 = m1;
                    m1 = diff;
                }else if(diff>m2){
                    m2 = diff;
                }
            }
            m1/=2;
            ans = min(ans,max(m1,m2));
        }
        cout<<ans<<endl;
    }
    return 0;
}