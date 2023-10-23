#include<bits/stdc++.h>
using namespace std;
void toh(int n,char ch1,char ch2,char ch3){
    if(n==0)
    return;
    toh(n-1,ch1,ch3,ch2);
    cout<<"move a disk from "<<ch1<<" to "<<ch3<<endl;
    toh(n-1,ch2,ch1,ch3);
}
int main(){
    toh(3,'A','B','C');
    return 0;
}