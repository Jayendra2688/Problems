#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n,x,y;
        cin>>n>>x>>y;
        string s1,s2;
        cin>>s1>>s2;
        if(s1==s2){
            cout<<0<<endl;
            continue;
        }
        vector<long long>v;
        long long cost = 0;
        for(long long i=0;i<n;i++){
            if(s1[i]!=s2[i])
            v.push_back(i);
        }
        if(v.size()%2==1){
            cout<<-1<<endl;
            continue;
        }
        
       if(v.size()==2){
        if(v[0]==v[1]-1){
            cout<<min(2*y,x)<<endl;
        }else{
            cout<<y<<endl;
        }

       }else{
        cout<<1LL*v.size()/2 * y<<endl;
       }
    }
    return 0;
}