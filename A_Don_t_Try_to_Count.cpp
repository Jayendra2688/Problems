#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int op = 0;
        while(n<m){
            n*=2;
            x=x+x;
            op++;
        }
        if(x.find(s)<x.length())
        cout<<op<<endl;
        else{
            x=x+x;
            op++;
            if(x.find(s)<x.length())
            cout<<op<<endl;
            else
            cout<<-1<<endl;
        }
    }
    return 0;
}