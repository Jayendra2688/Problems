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
        string s1,s2;
        cin>>s1>>s2;
        string S1=s1;
        sort(S1.begin(),S1.end());
        string S2=s2;
        sort(S2.begin(),S2.end());
        // cout<<S1<<" "<<S2<<endl;
        if(S1!=S2){
            cout<<"NO"<<endl;
            continue;
        }
        if(n>=6){
            cout<<"YES"<<endl;
        }else{
            if(n<=3){
                if(s1==s2){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else if(n==4){
                if(s1[1]==s2[1] && s1[2]==s2[2]){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                if(s1[2]==s2[2]){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}