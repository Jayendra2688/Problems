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
        if(k%2==0){
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }else{
            string s1="";
            string s2="";
            for(int i=0;i<n;i++){
                if(i%2==0)
                s1+=s[i];
                else
                s2+=s[i];
            }
            string ans="";
            int f= 1;
            int i=0;
            int j=0;
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            while(ans.length()!=s.length()){
                if(f){
                    ans+=s1[i++];
                    f=0;
                }else{
                    ans+=s2[j++];
                    f=1;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}