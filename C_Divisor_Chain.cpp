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
        vector<int>ans;
        int num = 1;
        while(num<=n){
            ans.push_back(num);
            num*=2;
        }
        num/=2;
        if(num==n){

        }else{
            int diff = n-num;
            for(int i=30;i>=0;i--){
                if(diff & (1<<i)){
                    num += (1<<i);
                    ans.push_back(num);
                }
            }
        }
        cout<<ans.size()<<endl;
        reverse(ans.begin(),ans.end());
        for(auto val : ans){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}