#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n,e;
        cin>>n>>e;
        if(e>=(n*n)){
            cout<<(2*n-1)<<endl;
            continue;
        }
        long long num = n*(n+1)/2;
        if(e<=num){
            long long l = 1;
            long long h = n;
            long long ans;
            while(l<=h){
                long long m = l+(h-l)/2;
                long long m1 = m*(m+1)/2;
                if(m1>=e){
                    ans=m;
                    h=m-1;
                }else{
                    l=m+1;
                }
            }
            cout<<ans<<endl;

        }else{
            long long l = 1;
            long long h = n-1;
            long long ans;
            while(l<=h){
                long long m = l+(h-l)/2;
                long long m1 = num + m*(2*(n-1)-(m-1))/2;
                // cout<<m<<" "<<m1<<endl;
                if(m1>=e){
                    ans=m;
                    h=m-1;
                }else{
                    l=m+1;
                }
            }
            cout<<ans+(n)<<endl;

        }
    }
    return 0;
}