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
        int pre;
        cin>>pre;
        vector<int>v;
        for(int i=1;i<n;i++){
            int x;
            cin>>x;
            if(2*x>pre){
                v.push_back(1);
            }else{
                v.push_back(0);
            }
            pre=x;
        }
        int cnt=0;
        int ans =0;
        for(int i=0;i<n-1;i++){
            if(v[i]==1){
                cnt++;
            }else{
                if(cnt>=k){
                    ans+=(cnt-k+1);
                }
                cnt=0;
            }
        }
        if(cnt>=k){
                    ans+=(cnt-k+1);
                }
        cout<<ans<<endl;
    }
    return 0;
}