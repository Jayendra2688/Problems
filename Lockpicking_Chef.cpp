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
        string s,s1;
        cin>>s>>s1;
        int ans = INT_MAX;
        for(int i=0;i<=(n-k);i++){
            int ans1 = 0;
            for(int j=i;j<i+k;j++){
                int a = abs(s[j]-s1[j-i]);
                ans1+=min(a,10-a);
            }
            ans=min(ans,ans1);
        }
        cout<<ans<<endl;
    }
    return 0;
}