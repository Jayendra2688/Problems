#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>h(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>h[i];
        int ans = 0;
        int cost = 0;
        int pre=0;
        for(int i=0;i<n;i++){
            if(a[i]>k){
                pre=i+1;
                continue;
            }
            if(i==0)
            cost+=a[i];
            else if(h[i-1]%h[i]==0){
                cost+=a[i];
                while(cost>k && pre<=i){
                    cost-=a[pre++];
                }
            }else{
                cost=a[i];
                pre=i;
            }
            ans=max(ans,i-pre+1);
        }
        cout<<ans<<endl;

    }
    return 0;
}