#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        int f=1;
        int f1=1;
        for(int i=0;i<n;i++){
            if(b[i]<a[i]){
                f=0;
            }
            if(a[i]!=b[i])
            f1=0;
        }
        if(f1){
            cout<<"YES"<<endl;
            continue;
        }
        if(f){
            int f2=1;
            for(int i=0;i<n-1;i++){
                if((a[i]!=b[i]) && b[i]-b[i+1]>1){
                    f2=0;
                    break;
                }
            }
            if((a[n-1]!=b[n-1])  && b[n-1]-b[0]>1)
            f2=0;
            if(f2)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
