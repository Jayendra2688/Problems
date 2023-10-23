#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        vector<vector<int>>v(a,vector<int>(b));
        for(int i=0;i<a;i++){
            string s;
            cin>>s;
            for(int j=0;j<b;j++){
                if(s[j]=='1')
                v[i][j]=1;
                else
                v[i][j]=0;
            }
        }
        if(v[0][0]==1){
            cout<<-1<<endl;
            continue;
        }
        vector<vector<int>>vp;
        for(int i=a-1;i>=0;i--){
            for(int j=b-1;j>=0;j--){
                if(v[i][j]==1){
                    vector<int>temp;
                    if(j!=0){
                        temp.push_back(i+1);
                        temp.push_back(j-1+1);
                        temp.push_back(i+1);
                        temp.push_back(j+1);
                    }else{
                        temp.push_back(i);
                        temp.push_back(j+1);
                        temp.push_back(i+1);
                        temp.push_back(j+1);
                    }
                    vp.push_back(temp);

                }
            }
        }
        cout<<vp.size()<<endl;
        for(auto val : vp){
            for(auto val1 : val){
                cout<<val1<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}