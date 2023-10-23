#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v;
        long long even = 0;
        long long odd  =0;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x%2==0){
            even++;
            v.push_back(0);
            }else{
                odd++;
                v.push_back(1);
            }
        }
        // cout<<abs(even-odd)<<endl;
        if(abs(even-odd)==0){
            long long j1 = 0;
            long long j2= 1;
            long long ans1 =0;
            long long ans2=0;
            for(long long i=0;i<n;i++){
                if(v[i]%2==1){
                    ans1+=abs(i-j1);
                    j1+=2;
                    ans2+=abs(i-j2);
                    j2+=2;
                }
            }
            cout<<min(ans1,ans2)<<endl;

        }else if(abs(even-odd)==1){
            long long j;
            long long ans = 0;
            if(even>odd){
                j=1;
            }else{
                j=0;
            }
            for(long long i=0;i<n;i++){
                if(v[i]%2==1){
                    ans+=abs(i-j);
                    j+=2;
                }
            }
            cout<<ans<<endl;

        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}