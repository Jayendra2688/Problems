#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        int op = 15;
        for(int j=0;j<=15;j++){
            int num = x+j;
            int op1 = j;
            for(int k=0;k<=15;k++){
                if(num%32768 == 0){
                    break;
                }else{
                    num*=2;
                    op1++;
                }
            }
            
            op=min(op,op1);
        }
        cout<<op<<" ";
    }
    cout<<endl;
    return 0;
}