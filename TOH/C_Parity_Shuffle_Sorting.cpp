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
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        cout<<n-1<<endl;
        cout<<1<<" "<<n<<endl;
        if((v[0]+v[n-1])%2==0)
        {
            v[0]=v[n-1];
        }else
        v[n-1]=v[0];
        for(int i=1;i<n-1;i++){
            if((v[0]+v[i])%2==1){
                cout<<1<<" "<<i+1<<endl;
            }else{
                cout<<i+1<<" "<<n<<endl;
            }
        }
    }
    return 0;
}