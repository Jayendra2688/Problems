#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,del,add;
        cin>>n>>del>>add;
        set<long long>s;
        long long d1 = 0;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            if(s.find(x)!=s.end()){
                d1++;
            }
            s.insert(x);
        }
        long long money = d1*del;
        vector<long long>v(s.begin(),s.end());
        long long extra = 1e18;
        for(long long i=0;i<v.size();i++){
            long long ind = i+1;
            long long td = v.size()-ind;
            long long ti = v[i]-ind;
            // cout<<ti<<" "<<td<<endl;
            extra = min(extra,td*del+ti*add);
        }
        extra=min(extra,del*v.size()+add);
        cout<<extra+money<<endl;

    }
    return 0;
}