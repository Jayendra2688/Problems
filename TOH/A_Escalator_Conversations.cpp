#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k,H;
        cin>>n>>m>>k>>H;
        vector<int>v(n);
        int ans = 0;
        for(int i=0;i<n;i++)
        cin>>v[i];
        for(auto val : v){
            int x = abs(val-H);
            if(x%k == 0){
                int y = x/k;
                if(y<m && y!=0){
                    ans++;
                    // cout<<val<<endl;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}