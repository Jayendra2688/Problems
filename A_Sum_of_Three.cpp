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
        if(n<=6){
            cout<<"NO"<<endl;
            continue;
        }
        if((n-3)%3==0 && (n-3)/3 >=3){
            int x = (n-3)/3;
            cout<<"YES"<<endl;
            cout<<(1+(x-1)*3)<<" "<<(4)<<" "<<1<<endl;
        }else if((n-4)%3==0 && (n-3)/3>=1){
             int x = (n-3)/3;
            cout<<"YES"<<endl;
            cout<<(1+(x)*3)<<" "<<(1)<<" "<<2<<endl;
        }else if((n-5)%3==0 && (n-3)/3>=1){
             int x = (n-3)/3;
            cout<<"YES"<<endl;
            cout<<(2+(x)*3)<<" "<<(2)<<" "<<1<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}