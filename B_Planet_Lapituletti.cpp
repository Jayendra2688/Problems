#include<bits/stdc++.h>
using namespace std;
string isValid(string &s){
    for(int i=0;i<s.length();i++){
        if(s[i]=='1' || s[i]=='2' || s[i]=='5' || s[i]=='8' || s[i]=='0'){
            if(s[i]=='2'){
                s[i]='5';
                
            }
            else if(s[i]=='5'){
                s[i]='2';
            }
        }else{
            return "invalid";
        }
        // cout<<s<<endl;
       
    }
    reverse(s.begin(),s.end());
     return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        string s;
        cin>>s;
        int hours = stoi(s.substr(0,2));
        int mins = stoi(s.substr(3,2));
        for(int i=0;i<=(h*m);i++){
            int h1 = i/m;
            int m1 = i%m;
            int m2 = (mins + m1)%m;
            int h2 = (hours + (mins+m1)/m + h1)%h;
            string newh = to_string(m2);
            if(newh.length()==1)
            newh = '0' + newh;
            newh = isValid(newh);
            if(newh=="invalid"){
                continue;
            }
            string newm = to_string(h2);
            if(newm.length()==1)
            newm = '0' + newm;
            newm = isValid(newm);
            if(newm=="invalid"){
                continue;
            }
            // cout<<stoi(newh)<<" "<<stoi(newm)<<endl;
            if(stoi(newh)<h && stoi(newm)<m){
                string s1 = isValid(newm);
                string s2 = isValid(newh);
                cout<<s1+":"+s2<<endl;
                break;
            }
        }
    }
    return 0;
}