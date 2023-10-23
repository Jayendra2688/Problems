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
        string s1,s2;
        cin>>s1>>s2;
        int op1 = 0;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                op1++;
            }
        }
        if(op1==0){
            cout<<0<<endl;
            continue;
        }
        if(op1%2==0)
        op1*=2;
        else
        op1 = 2*op1 -1;
        int op2= 0;
        reverse(s1.begin(),s1.end());
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i])
            op2++;
        }
        if(op2==0)
        op2=2;
        else if(op2%2==1){
            op2*=2;
        }else if(op2%2==0){
            op2=2*op2-1;
        }
        cout<<min(op1,op2)<<endl;
    }
    return 0;
}