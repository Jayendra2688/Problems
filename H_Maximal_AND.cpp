#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        int ans= INT_MAX;
        for(int i=0;i<n;i++){
        cin>>v[i];
        ans&=v[i];
        }
        vector<int>unset(31,0);
        for(auto val : v){
            int n1 = val;
            for(int j=0;j<=30;j++){
                if((n1&(1<<j))==0)
                unset[j]++;
            }
        }
        
        // cout<<endl;
        for(int j=30;j>=0;j--){
            if(unset[j]!=0 && unset[j]<=k){
                ans+=(1<<j);
                k-=unset[j];
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}