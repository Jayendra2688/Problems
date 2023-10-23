#include<bits/stdc++.h>
using namespace std;
vector<int> allocc(int ind,vector<int>&v,int tar){
    if(ind==-1)
    return vector<int>();
    vector<int>v1= allocc(ind-1,v,tar);
    if(v[ind]==tar){
        v1.push_back(ind);
    }
    return v1;
}
int main(){
    vector<int>v={2,3,6,8,9,6};
    vector<int>ans=allocc(v.size()-1,v,6);
    for(auto val : ans)
    cout<<val<<endl;
    return 0;
}