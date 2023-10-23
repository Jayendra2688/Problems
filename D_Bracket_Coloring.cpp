#include<bits/stdc++.h>
using namespace std;
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
        vector<int>col(n);
        int pre= 0;
        int lefts = 0;
        int f1=0;
        int f2=0;
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                pre++;
                lefts++;
            }else{
                pre--;
            }
            if(pre>0){
                col[i]=1;
                f1=1;
            }else if(pre<0){
                col[i]=2;
                f2=1;
            }else{
                col[i]=col[i-1];
            }
        }
        if(2*lefts!=n)
        cout<<-1<<endl;
        else{
            if(f1 && f2){
            cout<<2<<endl;
            for(auto val : col)
            cout<<val<<" ";
            cout<<endl;
            }
            else{
            cout<<1<<endl;
            for(auto val : col)
            cout<<1<<" ";
            cout<<endl;
            }
        }
        
    }
    return 0;
}