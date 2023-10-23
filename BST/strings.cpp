#include<bits/stdc++.h>
using namespace std;
bool isValid(string A){
    if(A.length()==1&&A[0]=='0') return true;
    if(A[0]=='0'||A.length()>3) return false;
    if(stoll(A)<=255 && stoll(A)>=0)
    return true;
    return false;
}
string removeZeros(string A){
    int i= 0;
    int l = A.length();
    while(i<l && A[i]=='0')
    i++;
    return A.substr(i,l-i);
}
void recur(int i,int j,string A,vector<string>&curr,set<vector<string>>&ans,int par,int tpar){
    if(par==3){

        string s1 = A.substr(i,j-i+1);
        if(isValid(s1)){
            if(stoll(s1)!=0){
                s1 = removeZeros(s1);
            }
            curr.push_back(s1);
            ans.insert(curr);
            curr.pop_back();
        }
        return;
        
    }
    for(int k = i;k<=(j-1);k++){
        string s1 = A.substr(i,k-i+1);
        if(isValid(s1)){
            if(stoll(s1)!=0){
                s1 = removeZeros(s1);
            }
            curr.push_back(s1);
            recur(k+1,j,A,curr,ans,par+1,tpar);
            curr.pop_back();
        }
    }
}
vector<string> restoreIpAddresses(string A) {
    set<vector<string>>ans;
    vector<string>curr;
    recur(0,A.length()-1,A,curr,ans,0,3);
    vector<string>ans1;
    cout<<"ans1 "<<ans.size()<<endl;
    for(auto val : ans){
        string s1 = "";
        for(auto val1 : val){
            s1+=val1;
            s1+='.';
        }
        s1 = s1.substr(0,s1.length()-1);
        ans1.push_back(s1);
    }
    return ans1;
}

int main(){
    vector<string>ans = restoreIpAddresses("0100100");
    for(auto val : ans )
    cout<<val<<endl;
        return 0;
}