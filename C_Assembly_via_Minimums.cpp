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
        set<int>s;
        map<int,int>mp;
        vector<int>b;
        int y = n*(n-1)/2;
        for(int i=0;i<y;i++){
            int x;
            cin>>x;
            s.insert(x);
            mp[x]++;
        }
        vector<int>ans;
        int req = n-1;
        // cout<<req<<endl;
        for(auto val : s){
            int n1 = val;
            int n2 = mp[n1];
            while(n2>=req && req>0){
                ans.push_back(n1);
                // cout<<n1<<endl;
                n2-=req;
                req= req-1;
                // cout<<n2<<endl;
            }
        }
        y= ans.size();
        int ele = ans[y-1];
        for(int i = y;i<n;i++){
            ans.push_back(ele);
        }
        for(auto val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}