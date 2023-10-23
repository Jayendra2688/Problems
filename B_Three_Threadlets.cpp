#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        vector<int>v(3);
        cin>>v[0];
        cin>>v[1];
        cin>>v[2];
        sort(v.begin(),v.end());
        int op  =0;
        int f=1;
        if(v[1]%v[0]==0)
        op+=((v[1]/v[0])-1);
        else
        f=0;
        if(v[2]%v[0]==0)
        op+=((v[2]/v[0])-1);
        else
        f=0;
        if(f && op<=3)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;


    }
    return 0;
}