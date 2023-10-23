#include<bits/stdc++.h>
using namespace std;
class Compare {
public:
    bool operator()(pair<int,int>below, pair<int,int>above)
    {
        if (below.first < above.first) {
            return true;
        }
        else if (below.first == above.first
                 && below.second > above.second) {
            return true;
        }
 
        return false;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        priority_queue<pair<int,int>,vector<pair<int,int>>,Compare>pq;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            x = x%k;
            if(x==0)
            cout<<i<<" ";
            else
            pq.push({x,i});
        }
        while(!pq.empty()){
            cout<<pq.top().second<<" ";
            pq.pop();
        }
        cout<<endl;
        
    }
    return 0;
}