#include<bits/stdc++.h>
using namespace std;
void recur(int n){
    if(n==0){
        return ;
    }
    cout<<"Jayendra"<<endl;
    recur(n-1);
}
void recur1(int n,int N){
    if(n==(N+1))
    return ;
    cout<<n<<endl;
    recur1(n+1,N);
}
void recur2(int n){
    if(n==0)
    return ;
    cout<<n<<endl;
    recur2(n-1);
}
void recur3(int i){
    if(i<1){
        return ;
    }
    recur3(i-1);
    cout<<i<<endl;

}
void recur4(int i,int N){
    if(i>N)
    return ;
    recur4(i+1,N);
    cout<<i<<endl;
}
bool checkpelin(int i,string s){
    if(i>=(s.length()/2))
    return true;
    return ((s[i]==s[s.length()-i-1]) && checkpelin(i+1,s));
}
int main(){
    cout<<checkpelin(0,"aba");
    return 0;
}