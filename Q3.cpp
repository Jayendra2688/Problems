#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int minimumSum(int n, int k) {
        map<int,int>mp;
        int sum = 0;
        for(int i=1;i<=50;i++){
            if(mp.size()==n)
                break;
            if(mp.find(k-i)!=mp.end())
                continue;
            else{
                cout<<i<<" ";
                v.push_back(i);
                mp[i]++;
                sum+=i;
            }
            
        }
        return sum;
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<minimumSum(27,49)<<endl;
    int sum = 0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==49){
                cout<<"YES"<<endl;
            }
        }
    }
    cout<<v.size()<<endl;
    cout<<sum<<endl;
    return 0;
}