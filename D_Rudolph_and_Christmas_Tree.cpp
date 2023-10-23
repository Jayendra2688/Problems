#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        double n,b,h;
        cin>>n>>b>>h;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        double sum1 = n*(b*h);
        sum1/=2.0;
        double sum2=0; 
        for(int i=0;i<n-1;i++){
            double h1 = v[i]+h-v[i+1];
            // cout<<h1<<endl;
            if(h1>0){
                
                double b1 = (b*h1)/h;
                sum2+=(b1*h1);
                
            }
        }
        sum2/=2;
        cout<<fixed<<setprecision(9)<<(sum1-sum2)<<endl;
    }
    return 0;
}