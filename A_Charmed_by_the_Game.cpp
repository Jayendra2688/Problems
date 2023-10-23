#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int a1=min(a,b);
        int b1=max(a,b);
        int sum = a+ b;
        int mid = sum/2;
        int a2=mid-a1;
        int b2 = sum-a2;
        if((a+b)%2==1)
        cout<<b2-a2+1<<endl;
        else
        cout<<(b2-a2+1)/2 + (b2-a2+1)%2<<endl;
        for(int i=a2;i<=b2;i++){
            cout<<i<<" ";
            if((a+b)%2==0)
            i++;
        }
        cout<<endl;
    }
    return 0;
}