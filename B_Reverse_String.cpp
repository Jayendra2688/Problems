#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        string s1="";
        vector<string>v;
        for(int i=0;i<s.length();i++){
            s1+=s[i];
            v.push_back(s1);
            string s2 = s1;
            for(int j=s1.length()-2;j>=0;j--){
                s2+=s1[j];
                v.push_back(s2);
            }
        }
        int f=0;
        for(auto val : v){
            if(val.find(t)<val.length()){
                cout<<"YES"<<endl;
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<"NO"<<endl;
    }
    return 0;
}