#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        int pre = -1;
        vector<int>prev(n);
        for(int i=0;i<n;i++){
            prev[i]=pre;
            if(s[i]=='0')
            prev[i] = i;
            pre = prev[i];
        }
        vector<int>nxt(n);
        int next = n;
        for(int i=n-1;i>=0;i--){
            nxt[i] = next;
            if(s[i]=='1'){
                nxt[i] = i;
                next = nxt[i]; 
            }
        }
        int f= 0;
        set<pair<int,int>>sp;
        while(q--){
            int l,r;
            cin>>l>>r;
            int l1 = nxt[l-1];
            int r1 = prev[r-1];
            if(l1>=r1){
                f=1;
            }else{
                sp.insert({l1,r1});
            }
        }
        cout<<sp.size()+f<<endl;
      
        
    }
    return 0;
}