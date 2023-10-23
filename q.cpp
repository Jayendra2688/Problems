#include<bits/stdc++.h>
using namespace std;
string solve(string s,int k){
    int i=0;
    int j =0;
    int curr = 0;
    int n = s.length();
    // cout<<n<<endl;
    vector<string>ans;
    while(i<=j && i<n && j<n){
        
        if(s[j]=='1')
        curr++;
        // cout<<curr<<endl;
        if(curr==k){
            ans.push_back(s.substr(i,j-i+1));
            if(s[i]=='1')
            curr--;
            else
            ans.push_back(s.substr(i+1,j-i));
            i++;
            j++;
        }else if(curr<k){
            j++;
        }else{
            while(curr>k && i<=j){
                if(s[i]=='1')
                curr--;
                i++;
            }
            if(i>j){
                j=i;
            }else if(curr==k){
                ans.push_back(s.substr(i,j-i+1));
                if(s[i]=='1')
                curr--;
                else
                ans.push_back(s.substr(i+1,j-i));
                i++;
                j++;
            }
        }
        
    }
    if(ans.size()==0)
    return "";
    int mini = INT_MAX;
    for(int i=0;i<ans.size();i++){
        int len = ans[i].length();
        mini = min(mini,len);
    }
    vector<string>ans1;
    for(auto val : ans){
        if(val.length()==mini)
        ans1.push_back(val);
    }
    sort(ans1.begin(),ans1.end());
    return ans1[0];
}
int main(){
    string s="10101";
    cout<<solve(s,2);
    return 0;
}