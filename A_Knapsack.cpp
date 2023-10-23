#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n,w;
        cin>>n>>w;
        vector<pair<long long,long long>>vp;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            vp.push_back({x,i});
        }
        sort(vp.begin(),vp.end());
        long long i;
        long long w1 = w/2 + w%2;
        long long sum = 0;
        int pre = 0;
        int f=0;
        for(i=0;i<n;i++){
            sum+=vp[i].first;
            if(sum>w){
                while(pre<=i && sum>w){
                    sum-=vp[pre].first;
                    pre++;
                }
                if(sum>=w1){
                    f=1;
                    break;
                }
            }
            else if(sum>=w1){
                f=1;
                break;
            }
        }
        if(f==0)
        cout<<-1<<endl;
        else{
            long long ind = i;
            cout<<ind-pre+1<<endl;
            for( i=pre;i<=ind;i++){
                cout<<vp[i].second+1<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}