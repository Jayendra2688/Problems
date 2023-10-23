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
        int x = 0;
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<n;i++){
            int iwant = v[i-1]^ans[i-1];
            int ans1 = 0;
            for(int j=0;j<=30;j++){
                if(iwant & (1<<j)){
                    if(v[i] & (1<<j)){

                    }else{
                        ans1 = ans1 ^ (1<<j);
                    }
                }else{

                }
            }
            ans.push_back(ans1);
        }
        for(auto val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}