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
        string s;
        cin>>s;
        int ans =0;
        for(int i=0;i<n;i++){
            map<char,int>mp;
            int q = 0;
            for(int j=i;j<n && j<(i+100);j++){
                mp[s[j]]++;
                q=max(mp[s[j]],q);
                if(q<=mp.size())
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}