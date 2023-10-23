#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int curr =0;
        int curr_min =0;
        map<ll,ll>mp;
        for(int i=0;i<s.length();i++){
            if(s[i]=='-')
            curr--;
            else
            curr++;
            if(curr<curr_min){
                mp[curr]=i+1;
                curr_min = curr;
            }
        }
        ll ans = 0;
        for(int i=0;i<abs(curr_min);i++){
            ans+=mp[-(i+1)];
        }
        cout<<ans+s.length()<<endl;
    }
    return 0;
}