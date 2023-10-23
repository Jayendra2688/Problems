#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int l = 2;
        long long int r = 5*1e9;
        while(l<=r){
            long long int m = l+(r-l)/2;
            if(m*(m-1)/2 >= n){
                r = m-1;
            }
            else
            l = m+1;
        }
        if(l*(l-1)/2 == n){
            cout<<l<<endl;
        }else{
            cout<<n-((l-1)*(l-2))/2 + (l-1)<<endl;
        }
    }
    return 0;
}