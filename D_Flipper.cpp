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
        for(int i=0;i<n;i++)
        cin>>v[i];
        if(n==1){
            cout<<v[0]<<endl;
            continue;
        }
        int maxi = 0;
        int ind = -1;
        for(int i=1;i<n;i++){
            if(v[i]>maxi){
                ind=i;
                maxi = v[i];
            }
        }
        
        int i = 0;
        int j;
        if(ind!=n-1)
        j = ind -1;
        else
        j=ind;
        int j1 = j;
        while(i+1<j){
            if(v[i]>v[j-1]){
                break;
            }
            else{
                j--;
            }
        }
        for(int i= j1+1;i<n;i++){
            cout<<v[i]<<" ";
        }
        for(int i=j1;i>=j;i--){
            cout<<v[i]<<" ";
        }
        for(int i=0;i<j;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}