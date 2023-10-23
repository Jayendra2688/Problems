#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>prec(2e5+5,vector<int>(31,0));
void solve(){
    vector<int>pre(31,0);
    for(int i=0;i<2e5+5;i++){
        int num=i;
        for(int j=0;j<=30;j++){
            if(num & (1<<j)){
                pre[j]++;
            }
        }
        prec[i]=pre;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        vector<int>v(31,0);
        for(int j=0;j<=30;j++){
            v[j]=prec[r][j]-prec[l-1][j];
        }
        int n = r-l+1;
        int maxi = INT_MIN;
        for(auto val : v)
        maxi=max(maxi,val);
        cout<<n-maxi<<endl;
    }
    return 0;
}