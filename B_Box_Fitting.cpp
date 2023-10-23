#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,W;
        cin>>n>>W;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }        
        int h = 0;
        while(!mp.empty()){
            int spaceLeft = W;
            while(true){
                auto it = mp.upper_bound(spaceLeft);
                if(it==mp.begin())
                break;
                --it;
                int a = it->first;
                int b = it->second;
                mp[a]--;
                if(mp[a]==0){
                    mp.erase(mp.find(a));
                }
                spaceLeft-=a;
            }
            h++;
        }
        cout<<h<<endl;
    }
    return 0;
}