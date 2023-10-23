#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int cnt = 0;
    for(auto val :  s){
        if(val=='('){
            cnt++;
        }else{
            cnt--;
        }
    }
    int ways = 0;
    if(cnt>0){
        // ) should be plased
        cnt  = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
            cnt++;
            else
            cnt--;
            if(cnt>0)
            ways++;
        }
    
    }else{
        cnt  = 0;
        for(int i = s.length()-1;i>=0 ;i--){
            if(s[i]=='(')
            cnt++;
            else
            cnt--;
            if(cnt<0)
            ways++;
        }

    }
    cout<<ways<<endl;

    return 0;
}