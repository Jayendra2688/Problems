#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        long long n;
        cin>>n;
        vector<long long>v(n);
        long long sum = 0;
        for(long long i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
        }
        sort(v.begin(),v.end());

        long long q;
        cin>>q;
        while(q--){
            long long d,a;
            cin>>d>>a;
            long long x = 0;
            long long y = 0;
            x= max(x,d-v[n-1]);
            y = max(y,a-(sum-v[0]));
            long long s = 0;
            s= max(s,d+a-sum);
            cout<<max(s,x+y)<<endl;
        }
    
    return 0;
}