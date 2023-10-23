#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n+1,0);
        for(ll i=0;i<m;i++){
            ll x;
            cin>>x;
            v[x]++;
        }
        ll l = 1;
        ll h = 2*(1e5)+1;
        while(l<=h){
            ll m = l+(h-l)/2;
            ll f=0;
            ll resdual=0;
            for(ll i=1;i<=n;i++){
                if(v[i]>m){
                    resdual+=(v[i]-m);
                }else if(v[i]<m){
                    resdual-=(m-v[i])/2;
                }
            }
            if(resdual<=0)
            f=1;
            if(f){
                h=m-1;
            }else{
                l = m+1;
            }
        }
        cout<<l<<endl;

       
    }
    return 0;
}