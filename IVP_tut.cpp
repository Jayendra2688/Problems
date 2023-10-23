#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    cin>>m>>n;
    int a,b;
    cin>>a>>b;
    vector<vector<int>>v(m+(a),vector<int>(n+(b),0));
    vector<vector<int>>v1((a),vector<int>((b),0));
    for(int i=a;i<(a+m);i++){
        for(int j=b;j<(b+n);j++){
            cin>>v[i][j];
        }
    }
    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>v1[i][j];
        }
    }
    for(int i=0;i<(a+m);i++){ 
        for(int j=0;j<(b+n);j++){
            int ans = 0;
            for(int k1 = 0;k1<a;k1++){
                for(int k2=0;k2<b;k2++){
                    ans+=(v[i+k1][j+k2] * v1[k1][k2]);
                }
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}