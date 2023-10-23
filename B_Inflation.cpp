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
        vector<long long>v(n);
        for(long long i=0;i<n;i++)
        cin>>v[i];
        long long sum = v[0];
        long long ans = 0;
        for(long long i=1;i<n;i++){
            if(v[i]*100 > sum*k){
                long long suminc = (v[i]*100)/k + ((v[i]*100)%k!=0);
                ans+=(suminc-sum);
                sum = suminc;
            }
                sum+=v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}