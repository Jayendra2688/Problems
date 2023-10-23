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
        string s;
        cin>>s;
        vector<int>out(26,-1);
        vector<int>in(26,0);
        for(int i=0;i<n;i++){
            if(out[s[i]-'a']!=-1){
                cout<<(char)('a'+out[s[i]-'a']);
            }else{
                for(int j=0;j<26;j++){
                    if(in[j]==0){
                        if(out[j]==-1 && s[i]!=('a'+j)){
                            in[j]=1;
                            out[s[i]-'a']=j;
                            break;
                        }else{
                            int cnt = 1;
                            int ch = j;
                            while(ch!=-1 && cnt!=26 && ch!=(s[i]-'a')){
                                ch = out[ch];
                                cnt++;
                            }
                            if(ch==-1 || cnt==26){
                                in[j]=1;
                                out[s[i]-'a']=j;
                                break;
                            }
                        }
                    }
                }
                cout<<(char)('a'+out[s[i]-'a']);
            }
        }
        cout<<endl;
    }
    return 0;
}