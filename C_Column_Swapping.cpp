#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v[n];
        vector<int>v1[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                v[i].push_back(x);
            }
            v1[i]=v[i];
            sort(v1[i].begin(),v1[i].end());
        }
    
        int ind1=-1;
        int ind2=-1;
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v1[i][j]!=v[i][j]){
                    cnt++;
                    if(cnt==1)
                    ind1=j;
                    if(cnt==2)
                    ind2=j;
                }
            }
            if(cnt>=2){
                break;
            }
        }
        if(cnt==0){
            cout<<"1 1"<<endl;
        }else if(cnt>2){
            cout<<-1<<endl;
        }else{
            int f=1;
            for(int i=0;i<n;i++){
                swap(v[i][ind1],v[i][ind2]);
                if(v[i]!=v1[i])
                f=0;
            }
            if(f)
            cout<<ind1+1<<" "<<ind2+1<<endl;
            else
            cout<<-1<<endl;
        }

    }
    return 0;
}