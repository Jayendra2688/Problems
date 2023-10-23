#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n-1);
        long long sum = (n*(n+1))/2;
        for(long long i=0;i<n-1;i++)
        cin>>v[i];
        if(v[n-2]!=sum){
            v.push_back(sum);
            vector<long long>hash(n+1,0);
            if(v[0]>n || v[0]<1){
                cout<<"NO"<<endl;
                continue;
            }else{
                hash[v[0]]++;
                long long f=1;
                for(long long i=0;i<n-1;i++){
                    long long diff = v[i+1]-v[i];
                    if(diff>n || diff<1){
                        f=0;
                        break;
                    }
                    hash[diff]++;
                }
                if(f==0){
                    cout<<"NO"<<endl;
                }else{
                    long long f1=1;
                    for(long long i=1;i<=n;i++){
                        if(hash[i]!=1){
                            f1=0;
                            break;
                        }
                    }
                    if(f1)
                    cout<<"YES"<<endl;
                    else
                    cout<<"NO"<<endl;
                }
            }
        }else{
            vector<long long>hash(n+1,0);
            vector<long long>twos;
            long long f = 1;
            for(long long i=0;i<n-2;i++){
                long long diff = v[i+1]-v[i];
                if(diff>n){
                    twos.push_back(diff);
                    continue;
                }
                if(diff<1){
                    f=0;
                    break;
                }
                hash[diff]++;
                if(hash[diff]==2){
                    twos.push_back(diff);
                    hash[diff]--;
                }
            }
            if(f==0){
                cout<<"NO"<<endl;
            }else{
                if(v[0]>n && twos.size()>0){
                    cout<<"NO"<<endl;
                }else{
                    if(twos.size()>1){
                        cout<<"NO"<<endl;
                    }else{
                        if(twos.size()==0){
                            long long sum1 = 0;
                            for(long long i=1;i<=n;i++){
                                if(hash[i]==0)
                                sum1+=i;
                            }
                            if(sum1==v[0])
                            cout<<"YES"<<endl;
                            else
                            cout<<"NO"<<endl;
                        }else{
                            if(v[0]<=n){
                                hash[v[0]]++;
                            }
                            long long sum1 = 0;
                            for(long long i=1;i<=n;i++){
                                if(hash[i]==0)
                                sum1+=i;
                            }
                            if(twos[0]==sum1)
                            cout<<"YES"<<endl;
                            else
                            cout<<"NO"<<endl;                            
                        }
                    }
                }
            }

        }

    }
    return 0;
}