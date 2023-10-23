#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int f=0;
        vector<int>v(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        if(sum>0){
            f=1;
        }else if(sum<0)
        f=0;
        else{
            int m1 = *max_element(v.begin(),v.end());
            int m2 = *min_element(v.begin(),v.end());
            if(abs(m2)>=abs(m1))
            f=0;
            else
            f=1;
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        vector<pair<int,int>>vp;
        if(f){
            int ind = -1;
            int maxi = -40;
            for(int i=0;i<n;i++){
                if(maxi<v[i]){
                    ind = i;
                    maxi = v[i];
                }
            }
            
            for(int i=1;i<n;i++){
                if(v[i]>=v[i-1]){
                    continue;
                }else{
                    vp.push_back({i+1,ind+1});
                    v[i]+=maxi;
                    while(v[i]<v[i-1]){
                        v[i]+=maxi;
                        vp.push_back({i+1,ind+1});
                    }
                    if(v[i]>maxi){
                        maxi = v[i];
                        ind = i;
                    }
                }
            }
        }else{
            int ind = -1;
            int mini = 40;
            for(int i=0;i<n;i++){
                if(v[i]<mini){
                    mini=v[i];
                    ind = i;
                }
            }
            for(int i=n-2;i>=0;i--){
                if(v[i]<=v[i+1]){
                    continue;
                }else{
                    vp.push_back({i+1,ind+1});
                    v[i]+=mini;
                    while(v[i]>v[i+1]){
                        vp.push_back({i+1,ind+1});
                        v[i]+=mini;
                    }
                    if(v[i]<mini){
                        mini = v[i];
                        ind = i;
                    }
                }
            }

        }
        cout<<vp.size()<<endl;
        for(auto val : vp){
            cout<<val.first<<" "<<val.second<<endl;
        }
        
        
    }
    return 0;
}