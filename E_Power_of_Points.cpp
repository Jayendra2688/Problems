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
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        vector<int>v1;
        vector<int>pre1;
        long long sum1 = 0;
        for(auto val : mp){
            v1.push_back(val.first);
            sum1+=val.second;
            pre1.push_back(sum1);
        }
        vector<int>suff1(pre1.size(),0);
        long long sum2=0;
        int j = pre1.size()-1;
        for(auto it=--mp.end();it!=mp.begin();it--){
            sum2+=(it->second);
            suff1[j--]=sum2;
        }
        suff1[j] = (sum2+mp.begin()->second);
        vector<long long>pre2(v1.size(),0);
        vector<long long>suff2(v1.size(),0);
        sum1=0;
        for(int i=1;i<v1.size();i++){
            sum1+=((v1[i]-v1[i-1])*1LL*pre1[i-1]);
            pre2[i]=sum1;
        }
        sum2=0;
        for(int i = v1.size()-2;i>=0;i--){
            sum2+=((v1[i+1]-v1[i])*1LL*suff1[i+1]);
            suff2[i]=sum2;
        }
        for(int i=0;i<v1.size();i++){
            mp[v1[i]]=n+pre2[i]+suff2[i];
            // cout<<pre2[i]<<" "<<suff2[i]<<endl;
        }
        for(int i=0;i<v.size();i++){
            cout<<mp[v[i]]<<" ";
        }
        cout<<endl;

    }
    return 0;
}