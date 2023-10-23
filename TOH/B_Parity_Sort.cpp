#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        vector<int>v1=v;
        sort(v1.begin(),v1.end());
        int f=1;
        for(int i=0;i<n;i++){
            if((v[i]%2)!=(v1[i]%2)){
                f=0;
                break;
            }
        }
        if(f)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}