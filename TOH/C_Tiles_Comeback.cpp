#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int cnt = 0;
        int col = v[0];
        int i;
        for(i=0;i<n;i++){
            if(v[i]==v[0]){
                cnt++;
            }
            if(cnt==k)
            break;
        }
        if(cnt!=k){
            cout<<"NO"<<endl;
        }else{
            int col1 = v[n-1];
            if(col1==col){
                cout<<"YES"<<endl;
                continue;
            }
            int cnt2=0;
            for(int j = i+1 ;j<n;j++){
                if(v[j]==col1)
                cnt2++;
            }
            if(cnt2>=k){
                cout<<"YES"<<endl;
            }else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}