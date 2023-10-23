#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<long long>v[k];
        for(long long i=0;i<n;i++){
            if(s[i]=='0')
            v[i%k].push_back(0);
            else
            v[i%k].push_back(1);
        }
        long long op1=0;
        long long f1=1;
        for(long long i=0;i<k;i++){
            long long zeros=0;
            long long f=0;
            for(long long j=0;j<v[i].size();j++){
                if(v[i][j]==0){
                    zeros++;
                }else
                f=1;
            }
            if(zeros>0 && f==0)
            f1=0;
            else
            op1+=zeros;
        }
        if(f1==0)
        op1=INT_MAX;
        long long op0=0;
        long long f2=1;
        for(long long i=0;i<k;i++){
            long long ones=0;
            for(long long j=0;j<v[i].size();j++){
                if(v[i][j]==1){
                    ones++;
                }
            }
            if(ones==v[i].size() && ones%2==1){
            f2=0;
            break;
            }
            if(ones%2==0)
            op0+=(ones/2);
            else
            op0+=((ones+1)/2);
        }
        if(f2==0)
        op0=INT_MAX;
        // cout<<op0<<" "<<op1<<endl;
        cout<<min(op1,op0)<<endl;

    }
    return 0;
}