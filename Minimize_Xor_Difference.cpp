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
        int ans = 0;
        int i = 30;
        if(a==b){
            cout<<0<<endl;
            continue;
        }
        for(;i>=0;i--){
            if((a & (1<<i))^(b & (1<<i))){
                ans|=(1<<i);
                break;
            }
        }
        i--;
        for(i;i>=0;i--){
           if((a & (1<<i))^(b & (1<<i))){
               if(a>b){
                if(b & (1<<i)){
                    ans|=(1<<i);
                
                }
               }else{
                if(a & (1<<i)){
                    ans|=(1<<i);
                }
               }
            } 
        }
        cout<<ans<<endl;
    }
    return 0;
}