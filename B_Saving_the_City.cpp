#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int cost = a;
        vector<int>v;
        int f = 0;
        int zeros=0;
        for(int i=0;i<s.length();i++){
            if(f && s[i]=='0'){
                zeros++;
            }
            if(s[i]=='1'){
                if(f){
                    if(zeros>0)
                    v.push_back(zeros);
                    zeros=0;
                }
                f=1;
            }
        }
        if(f){
            for(int i=0;i<v.size();i++){
                cost+=min(b*v[i],a);
            }
            cout<<cost<<endl;
        }else{
            cout<<0<<endl;
        }

    }
    return 0;
}