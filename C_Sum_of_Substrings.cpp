#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int i1 = -1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                i1=i;
                break;
            }
        }
        if(i1==-1){
            cout<<0<<endl;
            continue;
        }
        int j1 =0;
        for(int j=n-1;j>=0;j--){
            if(s[j]=='1'){
                break;
            }
            j1++;
        }
        int cnt =0;
        for(auto val : s){
            if(val=='1')
            cnt++;
        }
        int ans = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i+1]=='0'){
                ans+=10;
            }else if(s[i]=='1' && s[i+1]=='1'){
                ans+=11;
            }else if(s[i]=='0' && s[i+1]=='1'){
                ans+=1;
            }
        }
        // cout<<i1<<" "<<j1<<" "<<ans<<endl;
        if(cnt==1){
            if(j1==0){

            }else if(i1==0){
                if(k>=j1)
            ans-=10;
            }else{
                if(k>=j1)
            ans-=10;
            else if(k>=i1)
            ans-=1;
            
            }
            cout<<ans<<endl;
            continue;
        }
        if(k>=(i1+j1) && i1!=0 && j1!=0){
            ans-=11;
        }else if(k>=j1 && j1!=0){
            ans-=10;
        }else if(k>=i1 && i1!=0){
            ans-=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}