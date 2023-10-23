#include<bits/stdc++.h>
using namespace std;
int mod = 998244353;
int binaryExpo(int base,int expo){
    if(expo==0){
        return 1;
    }
    int b1 = binaryExpo(base,expo/2)%mod;
    if(expo%2==0){
        return (b1*b1)%mod;
    }else{
        return (base*b1*b1)%mod;
    }
}
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
        int cnt = 0;
        
        int ans = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(cnt>=0)
                cnt=-1;
                else
                cnt--;
            }else{
                if(cnt<=0)
                cnt=1;
                else
                cnt++;
            }
            int ans1 = 1;
            if(abs(cnt)>0){
                ans1 = binaryExpo(2,abs(cnt)-1);
            }
            // cout<<cnt<<" "<<ans1<<endl;
            ans = (ans+ans1)%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}