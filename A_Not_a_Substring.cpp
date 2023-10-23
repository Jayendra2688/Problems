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
       
            string s1="";
            string s2="";
            for(int i=0;i<s.length();i++){
                string a ="(";
                s1+=a;
            }
             for(int i=0;i<s.length();i++){
                string a =")";
                s1+=a;
            }
            for(int i=0;i<s.length();i++){
                string a ="()";
                s2+=a;
            }
            if(s1.find(s)>s1.length()){
                cout<<"YES"<<endl;
                cout<<s1<<endl;
            }else if(s2.find(s)>s2.length()){
                cout<<"YES"<<endl;
                cout<<s2<<endl;
            }else
            cout<<"NO"<<endl;
        
    }
    return 0;
}