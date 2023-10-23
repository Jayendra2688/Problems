#include<bits/stdc++.h>
using namespace std;
bool compare(pair<long long,long long>a,pair<long long,long long>b){
    if(a.first!=b.first){
        return (a.first>b.first);
    }else
    return (a.second<b.second);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n,m,h;
        cin>>n>>m>>h;
        vector<pair<long long,long long>>vp;
        for(long long i=0;i<n;i++){
            long long h1 = h;
            long long sc = 0;
            long long p=0;
            long long p1 = 0;
            vector<long long>v(m);
            for(long long j=0;j<m;j++)
            cin>>v[j];
            sort(v.begin(),v.end());
            for(long long j=0;j<m;j++){
                if(v[j]<=h1){
                    sc++;
                    p+=v[j];
                    p1+=p;
                    h1-=v[j];
                }else
                break;
            }
            vp.push_back({sc,p1});
        }
        long long a = vp[0].first;
        // long long b = vp[0].second;
        long long b = (a != 0) ? vp[0].second : 0;
        sort(vp.begin(),vp.end(),compare);
        long long pos=0;
        for(auto val : vp){
            pos++;
            if(val.first==a && val.second==b){
                break;
            }
        }
        cout<<pos<<endl;
    }
    return 0;
}