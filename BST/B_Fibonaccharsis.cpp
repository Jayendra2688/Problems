#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(k>=34){
            cout<<0<<endl;
            continue;
        }
        long long a =1;
        long long b = 1;
        vector<long long>v1;
        v1.push_back(1);
        v1.push_back(1);
        long long c;
        for(long long i=0;i<37;i++){
            c=a+b;
            v1.push_back(c);
            a = b;
            b = c;
        }
        a = v1[k-3];
        b = v1[k-2];
        long long op = 0;
        for(long long i=0;i<=n;i++){
            long long y;
            if((n-a*i)>=0 && (n-a*i)%b == 0){
                y = (n-a*i)/b;
                if(y>=i)
                op++;
            }
        }
        cout<<op<<endl;
    }
    return 0;
}