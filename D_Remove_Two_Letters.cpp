#include<bits/stdc++.h>
using namespace std;
set<string>st;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = n-1;
        for(int i=0;i<n;i++){
            if(i+2<n && s[i]==s[i+2])
            ans--;
        }
        cout<<ans<<endl;
    }
    return 0;
}