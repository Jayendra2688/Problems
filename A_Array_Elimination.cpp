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
        vector<int>hash(31,0);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            for(int j=0;j<=30;j++){
                if(x&(1<<j)){
                    hash[j]++;
                }
            }
        }
        for(int i=1;i<=n;i++){
            int f=1;
            for(int j=0;j<31;j++){
                if(hash[j]%i!=0){
                    f=0;
                }
            }
            if(f)
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}