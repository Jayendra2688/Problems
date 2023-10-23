#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        vector<int>v;
        for(auto val : mp){
            if(val.second>=k)
            v.push_back(val.first);
        }
        if(v.size()==0){
            cout<<-1<<endl;
            continue;
        }
        int start = v[0];
        int end = v[0];
        int curr = 1;
        int ans = 1;
        int ans1=v[0];
        int ans2=v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]==end+1){
                end++;
                curr++;
            }else{
                if(curr>ans){
                    ans1=start;
                    ans2=end;
                    ans=curr;
                }
                start = v[i];
                end = v[i];
                curr=1;
            }
        }
         if(curr>ans){
            ans1=start;
            ans2=end;
         }
         cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}