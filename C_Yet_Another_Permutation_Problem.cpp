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
        vector<int>v(n+1,0);
        for(int i=1;i<=n;i++){
            int num = i;
            if(v[num])
            continue;
            while(num<=n){
                v[num]=1;
                cout<<num<<" ";
                num*=2;
            }
        }
        cout<<endl;

    }
    return 0;
}