#include<bits/stdc++.h>
using namespace std;
void pp(int i,string s,string ans){
    if(i==s.length()){
        cout<<ans<<endl;
        return;
    }
    pp(i+1,s,s[i]+ans);
    for(int i1=0;i1<ans.length();i1++){
        string s1 = ans.substr(0,i1+1);
        string s2 = ans.substr(i1+1,ans.length()-(i1+1));
        pp(i+1,s,s1+s[i]+s2);
    }
}
void ss(string ans){
    for(int i=0;i<ans.length();i++){
        string s1 = ans.substr(0,i+1);
        string s2 = ans.substr(i+1,ans.length()-(i+1));
        
    }
}
int main(){
    pp(0,"1234","");
    return 0;
}