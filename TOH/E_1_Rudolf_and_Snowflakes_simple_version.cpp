#include<bits/stdc++.h>
using namespace std;
vector<bool>v(1e6+10,false);
void solve(){
    for(int i= 2;i<=1e3;i++){
        int j = 1;
        long long num = 1;
        while(num<1e10){
            
            long long num1 = (num-1)/(i-1);
            if(j>3 && num1<=(1e6+10)){
                v[num1]=true;
                // cout<<i<<" "<<num1<<endl;
            }
            num*=i;
            // cout<<i<<" "<<num<<endl;
            j++;
        }
    }
}

int main(){
    solve();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(v[n]==true){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}