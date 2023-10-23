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
        int mini = 0;
        int maxi = 1e9+1;
        int f=1;
        for(int i=0;i<n-1;i++){
            if(v[i]<v[i+1]){
                int maxi1= (v[i]+v[i+1])/2;
                if(maxi1<mini){
                    f=0;
                    break;
                }else if(maxi1<maxi){
                    maxi=maxi1;
                }
            }else if(v[i]>v[i+1]){
                int mini1 = (v[i]+v[i+1])/2 + ((v[i]+v[i+1])%2!=0);
                if(mini1>maxi){
                    f=0;
                    break;
                }else if(mini1>mini){
                    mini=mini1;
                }
            }
        }
        if(!f)
        cout<<-1<<endl;
        else{
            cout<<mini<<endl;
        }
    }
    return 0;
}