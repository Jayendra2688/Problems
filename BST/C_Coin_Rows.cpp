#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v1(n);
        vector<int>v2(n);
        vector<int>vp(n,0);
        vector<int>vs(n,0);
        for(int i=0;i<n;i++)
        cin>>v1[i];
        for(int i=0;i<n;i++)
        cin>>v2[i];
        for(int i=1;i<n;i++){
            vp[i] = v2[i-1] + vp[i-1];
        }
        for(int i=n-2;i>=0;i--){
            vs[i] = v1[i+1] + vs[i+1];
        }
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            mini = min(mini,max(vs[i],vp[i]));
        }
        cout<<mini<<endl;

    }
    return 0;
}