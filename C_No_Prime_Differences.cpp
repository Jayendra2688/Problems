#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
         int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    if(n%2==0){
        int num = 1;
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
                v[i][j]=num++;
            }
        }
    }
    for(int j=0;j<m;j++){
        if(j%2==1){
            for(int i=0;i<n;i++){
                v[i][j]=num++;
            }
        }
    }

    }
    else{
        int num = 1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                v[i][j]=num++;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==1){
            for(int j=0;j<m;j++){
                v[i][j]=num++;
            }
        }
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    return 0;
}