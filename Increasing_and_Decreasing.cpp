#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int n1 = n-2;
        int sum = n1*(n1+1)/2;
        int x1 = y-sum;
        if(x1-x>n1){
            cout<<x<<" "<<x1<<" ";
            while(n1){
                x1+=n1;
                cout<<x1<<" ";
                n1--;
            }
            cout<<endl;

        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}