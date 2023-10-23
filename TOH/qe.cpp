#include<bits/stdc++.h>
using namespace std;
    string decomp(string a , string b){
        int x = 0;
        for(int i=min(a.length(),b.length())-1;i>=0;i--){
            int i1 = a.length()-1-i;
            int j1 = 0;
            int f= 1;
            for(;i1<a.length();i1++,j1++){
                if(a[i1]!=b[j1]){
                    f=0;
                    break;
                }
            }
            if(f){
                x=i+1;
                break;
            }
        }
        string s1 = a + b.substr(x,b.length()-x);
        return s1;
    }
    string solve(string a,string b,string c){
        
        return decomp(decomp(a,b),c);
    }
    string solve1(string a,string b){
        return decomp(a,b);
    }
    string minimumString(string a, string b, string c) {
        set<string>s;
        if(b.find(a)!=string::npos || c.find(a)!=string::npos){
            if(b.find(c)!=string::npos){
                s.insert(b);
            }else if(c.find(b)!= string::npos){
                s.insert(c);
            }else{
                s.insert(solve1(b,c));
                s.insert(solve1(c,b));

            }
        }
        if(a.find(b)!=string::npos || c.find(b)!=string::npos){
            if(a.find(c)!=string::npos){
                s.insert(a);
            }else if(c.find(a)!= string::npos){
                s.insert(c);
            }else{
                s.insert(solve1(a,c));
                s.insert(solve1(c,a));

            }
        }
        if(b.find(c)!=string::npos || a.find(c)!=string::npos){
            if(b.find(a)!=string::npos){
                s.insert(b);
            }else if(a.find(b)!= string::npos){
                s.insert(a);
            }else{
                s.insert(solve1(a,b));
                s.insert(solve1(b,a));

            }
        }
        if(b.find(a)!=string::npos || c.find(a)!=string::npos){
            if(b.find(c)!=string::npos){
                s.insert(b);
            }else if(c.find(b)!= string::npos){
                s.insert(c);
            }else{
                s.insert(solve1(b,c));
                s.insert(solve1(c,b));

            }
        }
        s.insert(solve(a,b,c));
        s.insert(solve(a,c,b));
        s.insert(solve(b,a,c));
        s.insert(solve(b,c,a));
        s.insert(solve(c,a,b));
        s.insert(solve(c,b,a));
        string a1 = a+b;
        s.insert(solve1(a1,c));
        s.insert(solve1(c,a1));
        a1=b+a;
        s.insert(solve1(a1,c));
        s.insert(solve1(c,a1));
        a1 = b+c;
        s.insert(solve1(a1,a));
        s.insert(solve1(a,a1));
        a1=c+b;
        s.insert(solve1(a1,a));
        s.insert(solve1(a,a1));
        a1 = a+c;
        s.insert(solve1(a1,b));
        s.insert(solve1(b,a1));
        a1=c+a;
        s.insert(solve1(a1,b));
        s.insert(solve1(b,a1));

        int mini = INT_MAX;
        for(auto val : s){
            int l = val.length();
            mini = min(mini,l);
        }
        set<string>s1;
        for(auto val : s){
            // cout<<val<<endl;
            if(val.length()==mini)
                s1.insert(val);
        }
        string ans = *s1.begin();
        return ans;
    }
int main(){
    cout<<minimumString("cac","a","a");
    return 0;
}