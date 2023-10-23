#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        map<long long,long long>mp;
        map<long long,long long>mp1;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x==0)
            continue;
            if(x>0)
            mp[x]++;
            else
            mp1[-x]++;
        }

        long long pre = 0;
        long long i = 0;
        long long ans=0;
        for(auto val : mp){
            pre+=val.second;
            if(pre/k > i){
                ans+=2*(pre/k - i)*val.first;
                i=pre/k;
            }
        }
        auto it = --mp.end();
        if(mp1.size()==0){
            cout<<ans-(it->first)<<endl;
            continue;
        }

        pre=0;
        i=0;
        long long ans1=0;
        for(auto val : mp1){
            pre+=val.second;
            if(pre/k > i){
                ans1+=(pre/k - i)*val.first;
                i=pre/k;
            }
        }
        auto it1=--mp1.end();
        if(it1->first>=it->first){
            cout<<ans1+ans-it1->first<<endl;
        }else{
            cout<<ans1+ans-it->first<<endl;
        }

        
    }
    return 0;
}