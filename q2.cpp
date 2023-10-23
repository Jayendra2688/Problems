#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    //maximum length of consecutive charectors;
    int left = 0;
    char ch = ' ';
    int maxi = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=ch){
            left = i;
            ch = s[i];
        }
        maxi = max(maxi,i-left+1);
    }
    cout<<maxi<<endl;
    return 0;
}