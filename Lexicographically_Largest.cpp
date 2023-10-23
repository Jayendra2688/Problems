#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long>b(n);
        map<long long,long long>mp;
        for(long long i=2;i*i<=m;i++){
            long long num1 = m;
            long long cnt = 0;
            while(num1%i==0){
                cnt++;
                num1/=i;
            }
            if(cnt>0)
            mp[i]=cnt;
        }
        b[0]=a[0];
        for(long long i=1;i<n;i++){
            long long reqGcd =a[i];
            long long num1 = a[i-1];
            b[i] = 1;
            if(num1==1){
                b[i]=m;
            }
            else if(reqGcd==num1){
                while(b[i]<=m){
                    b[i]*=reqGcd;
                }
                b[i]/=reqGcd;
            }
            else{
                b[i]=a[i];
                long long gcd1 = (reqGcd*num1)/(__gcd(reqGcd,num1));
                long long n2 = num1/gcd1;
                if(n2==1)
                continue;
                while(b[i]<=m){
                    b[i]*=n2;
                }
                b[i]/=n2;

            }
           
        }
        for(auto val : b)
        cout<<val<<" ";
        cout<<endl;
        
    }
    return 0;
}