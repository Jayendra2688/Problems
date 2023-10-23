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
        string s1,s2;
        cin>>s1>>s2;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(s1[i]=='1'){
                if(i==0){
                    v.push_back(i+1);
                }else{
                    v.push_back(i);
                    v.push_back(i+1);
                }
            }
        }
        int f=0;
        for(int i=n-1;i>=0;i--){
            if(s2[i]=='1'){
                if(f){
                    continue;
                }else{
                    v.push_back(i+1);
                    f=1;
                }
            }else{
                if(f){
                    v.push_back(i+1);
                    f=0;
                }else{
                    continue;
                }
            }
        }
        cout<<v.size()<<" ";
        for(auto val : v){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}