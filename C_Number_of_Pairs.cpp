#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n,l,r;
        cin>>n>>l>>r;
        vector<long long>v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long ans = 0;
        for(long long i=0;i<n;i++){
            long long i1 = upper_bound(v.begin(),v.end(),r-v[i])-v.begin();
            i1--;
            if((i1-i)>0)
            ans+=(i1-i);

            long long i2 = upper_bound(v.begin(),v.end(),l-1-v[i])-v.begin();
            i2--;
            if((i2-i)>0){
                ans-=(i2-i);
            }
            // cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}