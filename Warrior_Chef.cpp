#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<int>&v,int h,int m){
    for(int i=0;i<v.size();i++){
        if(v[i]>m){
            h-=v[i];
            if(h<=0)
            return false;
        }

    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,h1;
        cin>>n>>h1;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        int l = 0;
        int h = 1e5;
        while(l<=h){
            int m = l + (h-l)/2;
            if(isPossible(v,h1,m)){
                h=m-1;
            }else{
                l = m+1;
            }
        }
        cout<<l<<endl;

    }
    return 0;
}