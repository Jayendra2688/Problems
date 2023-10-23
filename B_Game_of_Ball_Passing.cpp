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
        vector<long long>v(n);
        for(long long i=0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        long long sum=0;
        for(long long i=0;i<n;i++){
            if(i==n-1){
                continue;
            }
            else{
                sum+=v[i];
            }
        }
        if(sum==0 && v[n-1]==0)
        cout<<0<<endl;
        else if(v[n-1]<=sum+1){
            cout<<1<<endl;
        }else{
            cout<<1+(v[n-1]-(sum+1))<<endl;
        }
    }
    return 0;
}