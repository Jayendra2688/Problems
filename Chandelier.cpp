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
        vector<int>w(n);
        for(int i=0;i<n;i++)
        cin>>w[i];
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
        cout<<a[0]-w[0]<<endl;
        continue;
        }
        vector<int>pref(n,0);
        pref[0]=a[0]-w[0];
        for(int i=1;i<n;i++){
            pref[i]=max(pref[i-1],a[i])-w[i];
        }
        vector<int>suff(n,0);
        suff[n-1]=a[n-1]-w[n-1];
        for(int i=n-2;i>=0;i--){
            suff[i] = max(suff[i+1],a[i])-w[i];
        }
        cout<<max(suff[1],a[0])-w[0]<<" ";
        for(int i=1;i<=n-2;i++){
            cout<<max(pref[i-1]+suff[i+1],a[i])-w[i]<<" ";
        }
        cout<<max(pref[n-2],a[n-1])-w[n-1]<<endl;
    }
    return 0;
}