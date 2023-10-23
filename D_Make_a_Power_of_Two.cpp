#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v;
        long long n1= n;
        while(n1){
            v.push_back(n1%10);
            n1/=10;
        }
        reverse(v.begin(),v.end());
        vector<long long>v1;
        long long num = 1;
        while(num<=1e18+10){
            v1.push_back(num);
            num*=2;
        }
        long long minop = 10;
        for(long long i=0;i<v1.size();i++){
            long long num = v1[i];
            vector<long long>nums;
            while(num){
                nums.push_back(num%10);
                num/=10;
            }
            reverse(nums.begin(),nums.end());
            long long j = 0;
            long long n = 0;
            long long match =  0;
            while(j<nums.size() && n<v.size()){
                if(nums[j]==v[n]){
                    match++;
                    j++;
                }
                n++;
            }
            long long op = nums.size()+v.size()-2*match;
            minop=min(minop,op);     
        }
        cout<<minop<<endl;

        
    }
    return 0;
}