#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<vector<int>>vup(n+2,vector<int>(n+2,0));
    vector<vector<int>>vlef(n+2,vector<int>(n+2,0));
    int i1 = n/2 +1;
    int i2 = n/2 + 1;
    int steps = 1;
    vup[i1][i2]=1;
    vlef[i1][i2]=1;
    int ans = 4;
    queue<pair<int,pair<int,int>>>pq;
    //1 indicates up 
    //0 indicats left
    pq.push({1,{i1+1,i2}});
    vup[i1+1][i2]=1;
    pq.push({1,{i1-1,i2}});
    vup[i1-1][i2]=1;
    pq.push({0,{i1,i2-1}});
    vlef[i1][i2-1]=1;
    pq.push({0,{i1,i2+1}});
    vlef[i1][i2+1]=1;
    while(steps!=n){
        steps++;
        int siz = pq.size();
        for(int i=0;i<siz;i++){
            auto p = pq.front();
            pq.pop();
            int direc = p.first;
            int x1 = p.second.first;
            int y1 = p.second.second;
            if(direc==1){
                
                if(!vlef[x1-1][y1]){
                    vlef[x1-1][y1]=1;
                    pq.push({0,{x1-1,y1}});
                }
                
                if(!vlef[x1+1][y1]){
                    vlef[x1+1][y1]=1;
                    pq.push({0,{x1+1,y1}});
                }

            } else{
                
                if(!vlef[x1][y1-1]){
                    vlef[x1][y1-1]=1;
                    pq.push({1,{x1,y1-1}});
                }
                if(!vup[x1][y1+1] && !vlef[x1][y1+1])
                ans++;
                if(!vlef[x1][y1+1]){
                    vlef[x1][y1+1]=1;
                    pq.push({1,{x1,y1+1}});
                }

            }
        }
    }
    cout<<ans<<endl;
    return 0;
}