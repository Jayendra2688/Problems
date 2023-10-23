#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long mini = k*(k+1)/2;
        long long maxi = n*(n+1)/2;
        long long n1 = n-k;
        maxi -= (n1)*(n1+1)/2;
        if(x<=maxi && x>=mini){
            cout<<"YES"<<endl;
        }else
        cout<<"NO"<<endl;
    }
    return 0;
}