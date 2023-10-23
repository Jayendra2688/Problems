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
        long long m1=LONG_LONG_MAX,m2=LONG_LONG_MAX;
        long long sum=0;
        for(long long i=0;i<n;i++){
            long long len;
            cin>>len;
            long long min1=LONG_LONG_MAX;
            long long min2=LONG_LONG_MAX;
            for(long long j=0;j<len;j++){
                long long x;
                cin>>x;
                if(x<min1){
                    min2=min1;
                    min1=x;
                }else if(x<min2){
                    min2=x;
                }
            }
            m1=min(m1,min1);
            m2=min(m2,min2);
            sum+=min2;
        }
        cout<<sum+m1-m2<<endl;
    }
    return 0;
}