#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,w;
        cin>>n>>w;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        int l = 1;
        int h = 2*(1e9+5);
        while(l<=h){
            int m = l+ (h-l)/2;
            long long ans1= 0;
            for(int i=0;i<n;i++){
                if(m>v[i]){
                    ans1+=(m-v[i]);
                }
            }
            if(ans1<=1LL*w){
                l = m+1;
            }else{
                h = m-1;
            }
        }
        cout<<h<<endl;
    }
    return 0;
}