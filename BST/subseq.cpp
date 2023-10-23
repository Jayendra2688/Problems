#include<bits/stdc++.h>
using namespace std;
vector<string> subs(int ind,string s){
    if(ind==s.length())
    return vector<string>()={""};
    vector<string>v1 = subs(ind+1,s);
    int siz = v1.size();
    for(int i=0;i<siz;i++){
        v1.push_back({s[ind] + v1[i]});
    }
    return v1;
}
int main(){
    int i = 1;
    for(auto val : subs(0,"abcdefghijkl")){
        cout<<val<<endl;
        cout<<i++<<endl;
    }
    return 0;
}