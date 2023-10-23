#include<bits/stdc++.h>
using namespace std;
vector<string> gsp(int n){
    if(n==0)
    return vector<string>()={""};
    if(n<0)
    return vector<string>()={};
    vector<string>ans;
    vector<string>v1 = gsp(n-1);
    for(auto val : v1)
    ans.push_back("1"+val);
    vector<string>v2 = gsp(n-2);
    for(auto val : v2)
    ans.push_back("2"+val);
    vector<string>v3 = gsp(n-3);
    for(auto val : v3)
    ans.push_back("3"+val);
    return ans;
}
int main(){
    vector<string>v = gsp(3);
    for(auto val : v)
    cout<<val<<endl;
    return 0;
}