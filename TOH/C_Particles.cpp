#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v1;
        vector<long long>v2;
        for(long long i=0;i<n;i++){
            long long x;cin>>x;
            if(i%2==0)
            v1.push_back(x);
            else
            v2.push_back(x);
        }
        if(n==1){
        cout<<v1[0]<<endl;
        continue;
        }
        sort(v1.begin(),v1.end(),greater<int>());
        sort(v2.begin(),v2.end(),greater<int>());

        long long sum1 = v1[0];
        for(long long i=1;i<v1.size();i++){
            if(v1[i]<=0)
            break;
            sum1+=v1[i];
        }
        long long sum2 =v2[0];
        for(int i=1;i<v2.size();i++){
            if(v2[i]<=0)
            break;
            sum2+=v2[i];
        }
        cout<<max(sum1,sum2)<<endl;

    }
    return 0;
}