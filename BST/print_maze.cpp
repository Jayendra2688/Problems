#include<bits/stdc++.h>
using namespace std;
void printMaze(int i,int j,int a,int b,string ans){
    if(i>=a || j>=b)
    return;
    if(i==(a-1) && j==(b-1)){
        cout<<ans<<endl;
        return;
    }
    printMaze(i+1,j,a,b,ans+"d");
    printMaze(i,j+1,a,b,ans+"r");
}
int main(){
    printMaze(0,0,10,10,"");
    return 0;
}