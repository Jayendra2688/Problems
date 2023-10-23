#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int v;
        cin>>v;
        int a,a1;
        cin>>a>>a1;
        int b,b1;
        cin>>b>>b1;
        int c ;
        cin>>c;
        for(int i=a1;i<=b1;i++){
            if((i-a1)<=(c-a) && (b1-i)<=(b-c)){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}