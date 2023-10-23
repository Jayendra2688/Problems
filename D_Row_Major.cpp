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
        int num=n;
        for(int i=1;i<n;i++){
            if(n%i!=0){
                num=i;
                break;
            }
        }
        string s="";
        for(int i=0;i<num;i++){
            char ch = 'a'+i;
            cout<<ch;
        }
        for(int i=num;i<n;i++){
            char ch = 'a'+ i%num;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}