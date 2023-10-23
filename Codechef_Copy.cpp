#include<bits/stdc++.h>
using namespace std;
bool solve(int i,string &s1,string &s,string &ans,vector<int>&v){
    if(i==s1.length()){
        return true;
    }
    // cout<<"hi"<<endl;
    for(int ind = 0;ind<s.length();ind++){
        if(v[s[ind]-'a']>0 && s1[i]!=s[ind]){
            // cout<<s[ind]<<endl;
            ans+=s[ind];
            // cout<<ans<<endl;
            v[s[ind]-'a']--;
            if(!solve(i+1,s1,s,ans,v)){
            v[s[ind]-'a']++;
            ans.pop_back();
            }else{
                return true;
            }
        }
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int>v(26,0);
        int f=1;
        for(auto val : s){
            v[val-'a']++;
            // cout<<(val-'a')<<" "<<v[val-'a']<<endl;
           
        }
        string s1 = "codechef";
        string ans="";
        if(solve(0,s1,s,ans,v)){
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }

    }
    return 0;
}