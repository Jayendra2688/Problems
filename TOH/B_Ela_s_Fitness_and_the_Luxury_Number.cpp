#include<bits/stdc++.h>
using namespace std;
bool inbet(long long l,long long r,long long x){
    if(x<=r && x>=l){
        return true;
    }
    return false;
}
long long bs_sqrt(long long x) {
  long long left = 0, right = 2000000000;
  while (left<=right) {
      long long mid = left + (right-left)/2;
      
      if (mid * mid <= x) left = mid+1;
      else right=mid-1;
  }
  return right;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long l,r;
        cin>>l>>r;
        long long x1 = bs_sqrt(l);
        long long l1 = l/x1 + (l%x1);
        long long x2 = bs_sqrt(r);
        long long r1 = r/x2 + (r%x2);
        long long ans = 0;
        long long rem = x2-x1-1;
        if(rem!=-1)
        ans+=(rem*3);
        if(inbet(l,r,x1*x1))
            ans++;
        if(inbet(l,r,x1*(x1+1)))
        ans++;
        if(inbet(l,r,x1*(x1+2)))
        ans++;
        
        if(x1!=x2){
            
            if(inbet(l,r,x2*x2))
            ans++;
        if(inbet(l,r,x2*(x2+1)))
        ans++;
        if(inbet(l,r,x2*(x2+2)))
        ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}