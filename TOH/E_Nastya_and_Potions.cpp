#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>cost(n+1);
        for(int i=1;i<n+1;i++){
            cin>>cost[i];
        }
        set<int>s;
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        vector<int>ans(n+1,INT_MAX);
        vector<>
        for(int ind = 1;ind<=n;ind++){
            int x;
            cin>>x;
            if(s.find(ind)!=s.end()){
                ans[ind]=0;
            }
            else{
                ans[ind]=cost[ind];
            }
            int cost1=0;
            for(int ind1= 0;ind1<x;ind1++){
                int p;
                cin>>p;
                if(s.find(p)==s.end()){
                    cost1+=cost[p];
                }
            }
            if(x!=0)
            ans[ind]=min(ans[ind],cost1);
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}