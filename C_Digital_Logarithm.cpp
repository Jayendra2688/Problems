#include<bits/stdc++.h>
using namespace std;
int func(int n){
    int digit =0;
    while(n){
        n/=10;
        digit++;
    }
    return digit;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp1[x]++;
        }
         for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(mp1.find(x)!=mp1.end()){
                mp1[x]--;
                if(!mp1[x]){
                    mp1.erase(x);
                }
            }else{
                mp2[x]++;
            }
        }
        int ans = 0;
        for(auto val : mp1){
            if(val.first>9){
                ans+=val.second;
                mp1[func(val.first)]+=val.second;
            }
        }
        for(auto val : mp2){
            if(val.first>9){
                ans+=val.second;
                mp2[func(val.first)]+=val.second;
            }
        }
        for(int i=1;i<=9;i++){
            ans+=abs(mp1[i]-mp2[i]);
        }
        ans-=abs(mp1[1]-mp2[1]);
        cout<<ans<<endl;
        
    }
    return 0;
}