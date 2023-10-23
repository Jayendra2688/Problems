#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int k1 = k;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(i==n-1){
                if((k-k1)%2!=0){
                    if(s[i]=='1'){
                        s[i]='0';
                    }else{
                        s[i]='1';
                    }
                }
                ans.push_back(k1);
                continue;
            }
            if(s[i]=='1'){
                if(k%2==0){
                    ans.push_back(0);
                }else{
                    if(k1>0){
                        k1--;
                        ans.push_back(1);
                    }else{
                        s[i]='0';
                        ans.push_back(0);

                    }
                }
            }else{
                if(k%2==0){
                    if(k1>0){
                        s[i]='1';
                        k1--;
                        ans.push_back(1);
                    }else{
                        ans.push_back(0);
                    }
                }else{
                    s[i]='1';
                    ans.push_back(0);
                }
            }
        }
        cout<<s<<endl;
        for(auto val : ans){
            cout<<val<<" ";
        }
        cout<<endl;

    }
    return 0;
}