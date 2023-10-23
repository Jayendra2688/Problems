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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>v1(31,0);
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[i]=v1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=30;j++){
                if((v[i] & (1<<j))){
                    mp[i][j]++;
                }
            }
            if(i!=0){
                for(int j=0;j<=30;j++){
                    mp[i][j] +=mp[i-1][j];
                
                }
                
            }
        }
        int q;
        cin>>q;
        while(q--){
            int l,k;
            cin>>l>>k;
            int low = l-1;
            int high = n-1;
            int ans = -1;
            while(low<=high){
                int mid = low + (high-low)/2;
                vector<int>v2=mp[mid];
                if(l!=1){
                    for(int j=0;j<=30;j++){
                        v2[j]-=mp[l-2][j];
                    }
                
                }
                int num = 0;
                int eles = mid-(l-1)+1;
                for(int j=0;j<=30;j++){
                    if(v2[j]==eles){
                        num+=(1<<j);
                    }
                    
                }
                // cout<<eles<<" "<<num<<" "<<mid<<endl;

                if(num>=k){
                    ans=mid+1;
                    
                    low = mid+1;
                
                }else{
                    high=mid-1;
                }
            }
            cout<<ans<<" ";
            // cout<<ans<<" ans";
        }
        cout<<endl;
    }
    return 0;
}