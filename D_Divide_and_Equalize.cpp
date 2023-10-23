#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int prime[N];
void solve(){
    vector<int>v(N,1);
    v[0]=0;
    v[1]=0;
    for(int i=2;i<N;i++){
        
        if(v[i]==1){
            prime[i]=i;
            for(int j=2*i;j<N;j+=i){
                v[j]=0;
                prime[j]=i;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    solve();
    while(t--){
        
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        map<int,int>mp;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
           
            int num = v[i];
            
            while(num>1){
                int prime1 = prime[num];
                // cout<<prime1<<endl;
                while(num % prime1==0){
                    num/=prime1;
                    mp[prime1]++;

                }
            }
        }
        int n1 = n;
        
        int f=1;
        for(auto val : mp){
            // cout<<val.first<<" "<<val.second<<endl;
            if(val.second%n1!=0){
                f=0;
            }
        }
        if(f){
            cout<<"YES"<<endl;
        }else
        cout<<"NO"<<endl;

    }
    return 0;
}