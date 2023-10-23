#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,a,l;
        cin>>n>>a>>l;
        string s;
        cin>>s;
        int pos = 0;
        int curr=  a;
        int f = 0;
        if(curr>=n){
                f=1;
            }
        for(int i=0;i<l;i++){
            if(s[i]=='+'){
            curr++;
            pos++;
            }
            else
            curr--;
            if(curr>=n){
                f=1;
            }
        }
        if(f){
            cout<<"YES"<<endl;

        }else{
            if(a+pos>=n){
                cout<<"MAYBE"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}