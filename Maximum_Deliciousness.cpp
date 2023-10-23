#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,l;
	    cin>>n>>k>>l;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    sort(v.begin(),v.end(),greater<int>());
	    int n1 = l;
	    ll ans =  0;
	    if(n1<=n){
	        cout<<n1<<" "<<v[n1-1]<<" "<<k<<endl;
	        ans+=v[n1-1];
	        n1+=k;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
