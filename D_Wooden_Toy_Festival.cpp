#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>&v,int maxi){
    int n = v.size();
    int i = 0;
    int j = 0;
    int carver = 0;
    while(j<n){
        int diff = v[j]-v[i];
        diff = diff/2 + diff%2;
        if(diff<=maxi){
            j++;
        }else{
            carver++;
            i=j;
        }
    }
    carver++;
    if(carver>3)
    return false;
    return true;
}
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
        sort(v.begin(),v.end());
        int l = 0;
        int h = 1e9;
        while(l<=h){
            int m = l + (h-l)/2;
            if(isPossible(v,m)){
                h=m-1;
            }else{
                l = m+1;
            }
        }
        cout<<l<<endl;
    }
    return 0;
}