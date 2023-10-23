#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,d;
        cin>>n>>m>>d;
        vector<int>v(m+2);
        v[0]=-d+1;
        v[m+1]=n+1;
        for(int i=1;i<=m;i++){
            cin>>v[i];
            
        }
        int totalEaten = 0;
        for(int i=0;i<=m;i++){
            totalEaten+=(v[i+1]-v[i]-1)/d;
        }
        totalEaten+=(m);
        vector<int>v1(m);
        int minieaten = n+1;
        for(int i=1;i<=m;i++){
            
            int eat1 = totalEaten;
            eat1-=((v[i]-v[i-1]-1)/d + (v[i+1]-v[i]-1)/d +1);
            eat1+=((v[i+1]-v[i-1]-1)/d);
            minieaten=min(minieaten,eat1);
            // cout<<eat1<<endl;
            v1[i-1]=eat1;
            // cout<<eat1<<endl;
        }
       
        int tot =0;
        for(auto val : v1){
            if(val==minieaten)
            tot++;
        }
        // if(v[1]==1){
        //     minieaten--;
        //     tot--;
        // }
        cout<<minieaten<<" "<<tot<<endl;
    }
    return 0;
}