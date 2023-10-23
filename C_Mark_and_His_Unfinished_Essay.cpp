#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n,c,q;
        cin>>n>>c>>q;
        string s;
        cin>>s;
        vector<pair<long long,long long>>vp;
        vp.push_back({1,n});
        long long len = n;
        vector<pair<long long,long long>>vp1;
        vp1.push_back({0,0});
        while(c--){
            long long x,y;
            cin>>x>>y;
            vp1.push_back({x,y});
            vp.push_back({len+1,len+=(y-x+1)});
            
        }
        while(q--){
            long long x;
            cin>>x;
            
            
            // cout<<x1<<" "<<dis<<endl;
            for(long long i=vp.size()-1;i>0;i--){
                if(x<=vp[i].second && x>=vp[i].first){
                    long long dis = x - vp[i].first;//very important
                    x=vp1[i].first+dis;
                }
            }
            cout<<s[int(x-1)]<<endl;
        }

    }
    return 0;
}