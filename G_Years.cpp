#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>&p1,pair<int,int>&p2){
    if(p1.first!=p2.first)
    return p1.first>p2.first;
    else
    return p1.second<p2.second;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        mp[x]++;
        mp[y]--;
    }
    vector<pair<int,int>>vp;
    int pre = 0;
    for(auto val : mp){
        pre+=val.second;
        vp.push_back({pre,val.first});
    }
    sort(vp.begin(),vp.end(),compare);
    cout<<vp[0].second<<" "<<vp[0].first<<endl;
    return 0;
}