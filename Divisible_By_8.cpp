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
        int num = 0;
        for(int i=3;i>=1;i--){
            if(n-i>=0){
                num*=10;
                num+=((s[n-i]-'0'));
            }
        }
        if(num%8==0){
            cout<<s<<endl;
            continue;
        }
        num/=10;
        int n1 =-1;
        for(int i=1;i<=9;i++){
            int num1=num*10;
            num1+=i;
            if(num1%8==0){
                n1=i;
                break;
            }
        }
        for(int i=0;i<n-1;i++){
            cout<<s[i];
        }
        cout<<n1<<endl;
    }
    return 0;
}