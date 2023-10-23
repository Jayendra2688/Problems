#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll pos;
        cin>>pos;
        ll n = s.length();
        ll pops=0;
        stack<pair<char,ll>>st;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            pair<char,ll>p = {s[i],i};
            while(!st.empty() && st.top().first>s[i]){
                pops++;
                v[st.top().second]=pops;
                // cout<<"HI"<<endl;
                st.pop();
            }
            st.push(p);
        }
        while(!st.empty()){
            pops++;
            v[st.top().second]=pops;
            
            st.pop();
        }
        vector<ll>v1;
        ll sum = 0;
        v1.push_back(0);
        for(ll i=0;i<n;i++){
            sum+=(n-i);
            v1.push_back(sum);

        }
        ll ind = lower_bound(v1.begin(),v1.end(),pos)-v1.begin();
        ind--;
        if(v1[ind]==pos){
            ind--;
        }
        pos-=v1[ind];
        pos--;
        string s1="";
        for(ll i=0;i<n;i++){
            if(v[i]>ind){
                s1+=s[i];
            }
        }
        cout<<s1[pos];
    }
    return 0;
}