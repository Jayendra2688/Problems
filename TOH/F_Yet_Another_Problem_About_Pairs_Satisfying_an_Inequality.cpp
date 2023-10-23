#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v1;
        vector<long long>v2;
        for(long long i=1;i<=n;i++){
            long long x;
            cin>>x;
            if(i>x){
                v1.push_back(x);
                v2.push_back(i);
            }
        }
        sort(v1.begin(),v1.end());
        long long ans = 0;
        for(auto val : v2){
            long long up = upper_bound(v1.begin(),v1.end(),val)-v1.begin();
            ans+=(v1.size()-up);
        }
        cout<<ans<<endl;

    }
    return 0;
}