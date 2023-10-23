#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int>mp1;
    map<int,int>mp2;
    vector<int>v1(n);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    for(int i=0;i<n;i++){
        cin>>mp1[v1[i]];
        mp2[v1[i]]=0;
    }
    int m;
    cin>>m;
    vector<int>v2(m);
    for(int i=0;i<m;i++)
    cin>>v2[i];
    for(int i=0;i<m;i++){
        cin>>mp2[v2[i]];
    }
    int ans = 1;
    int f=1;
    int mod =998244353;
    for(auto val : mp2){
        if(mp1[val.first]>mp2[val.first]){
            ans = (ans*2)%mod;
        }else if(mp1[val.first]<mp2[val.first]){
            f=0;
            break;
        }
    }
    if(f)
    cout<<(ans%mod)<<endl;
    else
    cout<<0<<endl;
    return 0;
}