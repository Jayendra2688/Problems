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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        string s;
        cin>>s;
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            int num;
            if(s[i]=='B')
            num=0;
            else
            num=1;
            vp.push_back({num,v[i]});
        }
        sort(vp.begin(),vp.end());
        int f=1;
        for(int i=0;i<vp.size();i++){
            if(vp[i].first==0){
                if(vp[i].second<(i+1)){
                    f=0;
                }
            }else{
                if(vp[i].second>(i+1)){
                    f=0;
                }

            }
        }
        if(f)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;


    }
    return 0;
}