#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int un=0;
        for(int i=1;i<=n;i++){
            int x;
            cin>>;
            if(i==x)
            un++;
        }
        if(un%2==0)
        cout<<un/2<<endl;
        else
        cout<<un/2 + 1<<endl;
    }
    return 0;
}