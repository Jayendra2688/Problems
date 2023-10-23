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
        int f1=0;
        int f2=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v[i]=x;
            if(x%10==5 || x%10==0){
                f1=1;
            }else{
                f2=1;
            }
        }
        if(f1 && f2){
            cout<<"No"<<endl;
        }else if(f1){
        
            int f =1;
            for(int i=0;i<n;i++){
                if(v[i]%10!=0){
                   v[i]+=(v[i]%10);
                }
            }
            int num = v[0];
            for(int i=0;i<n;i++){
                if(num!=v[i])
                f=0;
            }
            if(f)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
          
        }
        else{
            int maxi = -1;
            for(int i=0;i<n;i++){
                while(v[i]%10!=2){
                    v[i]+=(v[i]%10);
                }
                maxi= max(v[i],maxi);
            }
            int f=1;
            for(int i=0;i<n;i++){
                if((maxi-v[i])%20!=0)
                f=0;
            }
            if(f)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
    }
    return 0;
}