#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long l,p;
        cin>>l>>p;
        vector<long long>v;
        for(long long i=0;i<l;i++){
            long long x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(long long i=0;i<p;i++){
            long long a,b,c;
            cin>>a>>b>>c;
            if(c<0){
                cout<<"NO"<<endl;
            }else{
                
                // cout<<d1<<" "<<d2<<endl;
                int ind1 = lower_bound(v.begin(),v.end(),b)-v.begin();
                if(ind1<l && (b-v[ind1])*(b-v[ind1])<4*a*c){
                    cout<<"YES"<<endl;
                    cout<<v[ind1]<<endl;
                }else if(ind1>0 && (b-v[ind1-1])*(b-v[ind1-1])<4*a*c){
                    cout<<"YES"<<endl;
                    cout<<v[ind1-1]<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}