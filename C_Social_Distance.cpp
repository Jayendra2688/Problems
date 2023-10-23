#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>v;
        int k1=k+1;
        int k2 = 2*k+1;
        int zeros =0;
        int f=1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                v.push_back(zeros);
                zeros=0;
                f=0;
            }else
            zeros++;
        }
        v.push_back(zeros);
        if(f){
            cout<<(v[0]/k1 + (v[0]%k1!=0))<<endl;
            continue;
        }
        int ans = 0;
        for(int i=0;i<v.size();i++){
            if(i==0 || i==v.size()-1){
                ans+=(v[i]/k1);
            }else{
                if(v[i]>=k2){
                    ans++;
                    ans+=((v[i]-k2)/k1);
                }
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}