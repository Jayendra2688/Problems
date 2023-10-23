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
        char arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            cin>>arr[i][j];
        }
        int ans =0;
        int j1 = 0;
        int j2 = n-1;
        for(int i=0;i<n/2;i++){
            for(int j=j1;j<j2;j++){
                vector<char>v;
                v.push_back(arr[i][j]);
                // cout<<arr[i][j]<<" ";
                v.push_back(arr[j][j2]);
                // cout<<arr[j][j2]<<" ";
                v.push_back(arr[j2][n-1-j]);
                // cout<<arr[j2][n-1-j]<<" ";
                v.push_back(arr[n-1-j][i]);
                // cout<<arr[j2-j][i]<<" "<<endl;
                sort(v.begin(),v.end());
                for(int k=0;k<4;k++)
                ans+=((v[3]-'a')-(v[k]-'a'));
                
            }
            j1++;
            j2--;
        }
        cout<<ans<<endl;
    }
    return 0;
}