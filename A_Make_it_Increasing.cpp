#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<=sqrt(32768);i++){
        if(32768%i==0){
            if(i==(32768/i)){
                cout<<i<<endl;
            }else{
                cout<<i<<" "<<32768/i<<endl;
            }
        }
    }
    return 0;
}