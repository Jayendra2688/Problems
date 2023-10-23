#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,k;
        cin>>a>>b>>k;
        int v1,v2;
        cin>>v1>>v2;
        int f = 0;
        for(int i=0;i<k;i++){
            int x,y;
            cin>>x>>y;
            int a1 = abs(x-v1);
            int b1 = abs(y-v2);
            if(a1==b1){
                f=1;
            }else if(a==1 || b==1){
                if(a==1 && b1%2==0){
                    f=1;
                }
                if(b==1 && a1%2==0){
                    f=1;
                }
            }
        }
        if(f)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        
    }
    return 0;
}