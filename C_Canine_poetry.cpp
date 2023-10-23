#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        unordered_set<int>st;
        int n = s.length();
        for(int i=0;i<n;i+=2){
            if(i+2<n && st.find(i)==st.end() && s[i]==s[i+2]){
                st.insert(i+2);
            }
        }
        for(int i=0;i<n;i++){
            if(i+1<n && st.find(i)==st.end() && s[i]==s[i+1])
            st.insert(i+1);
        }
        cout<<st.size()<<endl;
        
    }
    return 0;
}