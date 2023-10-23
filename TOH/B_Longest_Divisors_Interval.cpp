#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans = 0;
        long long cnt = 0;
        for(long long i=1;i<=100;i++){
            if(n%i==0){
                cnt++;
            }else{
                ans=max(cnt,ans);
                cnt=0;
            }
        }
        ans=max(cnt,ans);
        cout<<ans<<endl;
    }
    return 0;
}