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
        vector<int>v1(n);
        vector<int>v2(n);
        for(int i=0;i<n;i++)
        cin>>v1[i];
        for(int i=0;i<n;i++)
        cin>>v2[i];
        for(int i=0;i<n;i++){
            int ind = lower_bound(v2.begin(),v2.end(),v1[i])-v2.begin();
            cout<<v2[ind]-v1[i]<<" ";
        }
        cout<<endl;
        vector<int>ans(n);
        int ind = n-1;
        for(int i=n-1;i>=0;i--){
            ans[i]=v2[ind]-v1[i];
            int i1 = lower_bound(v2.begin(),v2.end(),v1[i]) -v2.begin();
            int eles = n-1-i1+1;
            int e = n-1-i+1;
            if(e==eles){
                ind=i-1;
            }
        }
        for(auto val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}