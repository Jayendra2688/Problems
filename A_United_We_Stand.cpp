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
        sort(v.begin(),v.end());
        int cnt =0;
        for(int i=0;i<n;i++){
            if(v[i]==v[0])
            cnt++;
        }
        if(cnt==n)
        cout<<-1<<endl;
        else{
            cout<<cnt<<" "<<n-cnt<<endl;
            for(int i=0;i<cnt;i++)
            cout<<v[0]<<" ";
            cout<<endl;
            for(int i=cnt;i<n;i++)
            cout<<v[i]<<" ";
            cout<<endl;
        }
    
    }
    return 0;
}