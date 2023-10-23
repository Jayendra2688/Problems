#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        s='0'+s;
        int x=s.length();
        for(int i=0;i<s.length();i++){
            if(s[i]-'0'>=5){
                x=i;
                break;
            }
        }
    
        if(x!=s.length()){
            s[x]='0';
            int  j = x-1;
                while(s[j]=='9' && j>=0){
                    s[j]='0';
                    j--;
                }
                s[j]++;
            for(int i = x +1 ;i<s.length();i++){
                s[i]='0';
            }
        }
        // cout<<s<<endl;
        for(int i=s.length()-1;i>0;i--){
            if(s[i]-'0' < 5 ){
                continue;
            }else{
                s[i]='0';
                int  j = i-1;
                while(s[j]=='9' && j>=0){
                    s[j]='0';
                    j--;
                }
                s[j]++;
                i=j+1;
            }
        }
        if(s[0]=='0'){
            cout<<s.substr(1,s.length()-1)<<endl;
        }else
        cout<<s<<endl;
    }
    return 0;
}