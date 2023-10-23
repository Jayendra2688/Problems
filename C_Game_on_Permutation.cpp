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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        int a = v[0];
        int i = 0;
        for(i=1;i<n;i++){
            if(v[i-1]<v[i]){
                break;
            }
        }
        
            int ans = 0;
            int mini = INT_MAX;
            for(int j=i;j<n;j++){
                mini = min(mini,v[i]);
                if(j==i){
                    if(v[j]>v[i-1])
                    ans++;
                }
                else if(v[i]>=v[j] && v[i-1]<v[j] && mini>=v[j]){
                    ans++;
                }
            }
            cout<<ans<<endl;
        
    }
    return 0;
}