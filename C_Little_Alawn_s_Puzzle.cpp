#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v1(n);
        vector<long long>v2(n);
        for(long long i=0;i<n;i++)
        cin>>v1[i];
        for(long long i=0;i<n;i++)
        cin>>v2[i];
        
        map<pair<long long,long long>,long long>mp;
        for(long long i=0;i<n;i++){
            pair<long long,long long>p = {min(v1[i],v2[i]),max(v1[i],v2[i])};
            mp[p]++;
        }
        long long ans = 2;
        long long mod = 1000000007;
        int f=0;
        for(auto val : mp){
            if(val.second==1){
                f=1;
            }
        }
        if(f==0)
        ans=1;
        for(auto val : mp){
            ans = (ans*val.second)%mod;
            ans%=mod;
        }
        cout<<ans%mod<<endl;

    }
    return 0;
}