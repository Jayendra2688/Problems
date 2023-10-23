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
        vector<vector<int>>v;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            vector<int>v1(k);
            for(int j=0;j<k;j++){
            cin>>v1[j];
            mp[v1[j]]++;
            }
            v.push_back(v1);
        }
        int ans = 0;
    
        for(auto val : mp){
            int x = val.first;
            map<int,int>mp1=mp;
            map<int,int>mp2;
            for(int i=0;i<n;i++){
                map<int,int>mp3;
                int f=0;
                for(int j=0;j<v[i].size();j++){
                    if(v[i][j]==x){
                        f=1;
                    }
                    mp3[v[i][j]]++;
                }
                if(f==0)
                continue;
                for(auto val1 : mp3){
                
                    mp2[val1.first]+=val1.second;
                }
            }
            for(auto val2 : mp2){
                mp1[val2.first]-=val2.second;
            
                if(mp1[val2.first]==0){
                    mp1.erase(val2.first);
                    
                }
            }
            int a = mp1.size();
            ans = max(ans,a);
        }
        cout<<ans<<endl;
    }
    return 0;
}