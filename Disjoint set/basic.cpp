#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int>rank,parent,size;
    //rank can be seen as height which can't be reduced
    public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1,0);
        size.resize(n+1,1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }
    int findParent(int u){
        if(u==parent[u]){
            return u;
        }
        //path compression
        return parent[u]=findParent(parent[u]);
    }
    void unionBysize(int u,int v){
        int ulp_u = findParent(u);
        int ulp_v = findParent(v);
        if(ulp_u==ulp_v)
        return;
        if(size[ulp_u]<size[ulp_v]){
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }else if(size[ulp_v]<size[ulp_u]){
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }else{
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
    }
    void unionByRank(int u,int v){
        int ulp_u = findParent(u);
        int ulp_v = findParent(v);
        if(ulp_u==ulp_v)
        return;
        //we are connecting smaller rank to larger Rank.
        if(rank[ulp_v]<rank[ulp_u]){
            parent[ulp_v]=ulp_u;
        }
        else if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v;
        }else{
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;
        }
    }
    
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    DisjointSet ds(8);
    ds.unionBysize(1,2);
    ds.unionBysize(2,3);
    if(ds.findParent(3)==ds.findParent(4)){
        cout<<"same"<<endl;
    }
    else{
        cout<<"diff"<<endl;
    }
    ds.unionBysize(3,4);
    if(ds.findParent(3)==ds.findParent(4)){
        cout<<"same"<<endl;
    }
    else{
        cout<<"diff"<<endl;
    }
    ds.unionBysize(5,6);
    ds.unionBysize(6,7);
    if(ds.findParent(1)==ds.findParent(6)){
        cout<<"same"<<endl;
    }
    else{
        cout<<"diff"<<endl;
    }
    return 0;
}