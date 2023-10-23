#include<bits/stdc++.h>
using namespace std;
int minIncrements(int n, vector<int>& cost) {
        int i =1;
        int ind =0;
        int i1 =2;
        vector<int>maxis;
        while(ind < n){
            int m1 = INT_MIN;
            while(ind<i){
                m1 = max(m1,cost[ind]);
                ind++;
            }
            maxis.push_back(m1);
            i = i + i1;
            i1*=2;
        }
        for(auto val : maxis){
            cout<<val<<endl;
        }
        long long inc =0;
        i=1;
        ind =0;
        i1 = 2;
        int level = 0;
        while(ind < n){
            while(ind<i){
                inc+=(maxis[level]-cost[ind]);
                ind++;
            }
            level++;
            i = i + i1;
            i1*=2;
        }
        return inc;
        
    }
int main(){
    vector<int>v={764,1460,2664,764,2725,4556,5305,8829,5064,5929,7660,6321,4830,7055,3761};
    cout<<minIncrements(15,v);
    return 0;
}