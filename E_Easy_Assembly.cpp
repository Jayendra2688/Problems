#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>>v;
    vector<int>v1;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        vector<int>v2(m);
        for(int j=0;j<m;j++){
            cin>>v2[j];
            v1.push_back(v2[j]);
        }
        v.push_back(v2);
    }
    sort(v1.begin(),v1.end());
    int splits = 0;
    // for(auto val : v1)
    // cout<<val<<endl;
    for(int i=0;i<n;i++){
        int m = v[i].size();
        for(int j=0;j<m-1;j++){
            int ind = lower_bound(v1.begin(),v1.end(),v[i][j])-v1.begin();
            if(ind==(v1.size()-1)){
                splits++;
            }else if(v[i][j+1]!=v1[ind+1]){
                splits++;
            }
        }
    }
    cout<<splits<<" "<<n+splits-1<<endl;

    return 0;
}