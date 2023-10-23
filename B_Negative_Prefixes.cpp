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
        vector<int>l(n);
        vector<int>v1;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            cin>>l[i];
            if(l[i]==0){
                v1.push_back(v[i]);
            }
        }
        sort(v1.begin(),v1.end(),greater<int>());
        int j = 0;
        for(int i=0;i<n;i++){
            if(l[i]==0){
                v[i]=v1[j++];
            }
        }
        int pre = 0;
        int f = 0;
        for(auto val  : v){
            pre+=val;
            if(pre<0){
                f=1;
                break;
            }
        }
        
            for(auto val : v){
                cout<<val<<" ";
            }
            cout<<endl;
        
    }
    return 0;
}