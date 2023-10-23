#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long m,k,a1,ak;
        cin>>m>>k>>a1>>ak;
        long long x = m/k;
        long long ans = INT_MAX;
        for(long long i=0;i<=m;i++){
            if((m-i)%k==0){
                long long ex1 = i - min(i,a1);
                long long ex2 = (m-i) - min(k*ak,m-i);
                ex2/=k;
                ans=min(ans,ex1+ex2);
            }
        }
        cout<<ans<<endl;
            
        
    }
    return 0;
}