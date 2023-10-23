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
        int f=1;
        int mini = INT_MAX;
        for(int i=0;i<n-1;i++){
            if(v[i+1]<v[i]){
                f=0;
                break;
            }
            int op = v[i+1]-v[i];
            op = op/2 + 1;
            mini = min(mini,op);
        }
        if(f==0)
        cout<<0<<endl;
        else
        cout<<mini<<endl;
    }
    return 0;
}