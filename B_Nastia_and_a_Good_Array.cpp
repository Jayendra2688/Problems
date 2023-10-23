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
        int mini = INT_MAX;
        int ind = -1;
        for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]<mini){
            ind = i;
            mini = v[i];
        }
        }
        cout<<n-1<<endl;
        for(int i=0;i<n;i++){
            if(i!=ind){
                cout<<ind+1<<" "<<i+1<<" "<<v[ind]<<" "<<v[ind]+abs(i-ind)<<endl;
            }
        }
    }
    return 0;
}