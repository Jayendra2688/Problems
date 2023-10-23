#include<bits/stdc++.h>
using namespace std;
long long lcm(int num1,int num2){
    return 1LL*num1*num2/__gcd(num1,num2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long LCM = 1;
        int f=1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(LCM>1e9)
            continue;
            LCM=lcm(LCM,i+2);
            if(x%LCM==0){
                f=0;
            }
        }
        if(f)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}