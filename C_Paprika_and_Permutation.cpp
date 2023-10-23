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
        vector<int>v(n+1,0);
        vector<int>v1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x<=n && !v[x]){
                v[x]=1;
            }else{
                int num;
                if(x%2==0){
                    num = x/2-1;
                }else{
                    num=x/2;
                }
                v1.push_back(num);
            }
        }
        sort(v1.begin(),v1.end());
        int j = v1.size()-1;
        int f=1;
        for(int i=n;i>0;i--){
            if(v[i]==0){

                if(i<=v1[j]){
                    j--;
                    continue;
                }else{
                    f=0;
                    break;
                }
            }
        }
        if(f)
        cout<<v1.size()<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}