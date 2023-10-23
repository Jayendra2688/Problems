#include<bits/stdc++.h>
using namespace std;
vector<string> fullJustify(vector<string> &A, int B) {
    int n = A.size();
    vector<int>len;
    for(int i=0;i<n;i++){
        len.push_back(A[i].length());
    }
    vector<pair<int,int>>vp;
    int sum = len[0];
    int s = 0;
    int e = 0;
    for(int i=1;i<len.size();i++){
        if((sum+1+len[i])<=B){
            sum+=(1+len[i]);
            e=i;
        }else{
            vp.push_back({s,e});
            s=i;
            e=i;
            sum=len[i];
        }
    }
    vp.push_back({s,e});
    vector<string>ans;
    for(auto val : vp){
        string s1="";
        int len1 = 0;
        int s = val.first;
        int e = val.second;
        cout<<s<<" "<<e<<endl;
        for(int i=s;i<=e;i++){
            len1+=len[i];
        }
        int extra = B-len1;
        int k = e-s;
        if(k==0){
            string w(extra,' ');
            s1= s1+A[s]+w;
        }else{
            int k1 = extra/k;
            string w(k1,' ');
            int k2 =extra%k;
            for(int i = s ;i<e;i++){
                if((i-s)<k2){
                    A[i] = A[i]+w+' ';
                }else{
                    A[i] = A[i]+w;
                }
                s1+=A[i];
            }
            s1+=A[e];
        }
        ans.push_back(s1);
    }
    return ans;
    
}

int main(){
    vector<string>A={"what","must","be","acknowledgment","shall","be"};
    int B = 16;
    vector<string>a = fullJustify(A,16);
    for(auto val : a){
        cout<<val<<endl;
    }
    return 0;
}