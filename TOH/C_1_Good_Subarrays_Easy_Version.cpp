#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n+1);
        for(long long i=1;i<=n;i++)
        cin>>v[i];
        long long j=1;
        long long ind = 1;
        long long ans = 0;
        for(long long i=1;i<=n;i++){
            while(j<n+1 && v[j]>=ind){
                ind++;
                j++;
            }
            ind--;
            ans+=(j-i);

        }
        cout<<ans<<endl;
    }

    return 0;
}