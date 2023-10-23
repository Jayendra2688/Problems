#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n+1);
        vector<int>hash(n+1);
        for(int i=0;i<n;i++){
            cin>>v[i];
            hash[v[i]]=i+1;
        }
        int ans = 0;
        for(int i=1;i<=n-1;i++){
            if(hash[i]>hash[i+1])
            ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}