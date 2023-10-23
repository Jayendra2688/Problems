#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        a = a+(c/2 + c%2);
        b = b + (c/2);
        if(a>b){
            cout<<"First"<<endl;
        }else
        cout<<"Second"<<endl;
    }
    return 0;
}