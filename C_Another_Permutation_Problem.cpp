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
        int ans = 0;
        ans+=(n*(n-1));
        for(int i=1;i<n-1;i++){
            ans+=(i*i);
        }
        cout<<ans<<endl;
        LONG_LONG_MAX
    }
    return 0;
}