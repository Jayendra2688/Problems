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
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(mp[x]<2){
                mp[x]++;
            }
        }
        if(mp.size()==1){
            cout<<1<<endl;
            continue;
        }
        int len1=0;
        int len2=0;
        int f=1;
        int single=0;
        int d=0;
        for(auto val : mp){
            if(val.second==1)
            single++;
            else
            d++;
        }
        cout<<d+(single%2)+(single/2)<<endl;
    }
    return 0;
}