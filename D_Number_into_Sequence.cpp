#include<bits/stdc++.h>
using namespace std;
long long maxPrimeFactors(long long n)
{
    // Initialize the maximum prime factor
    // variable with the lowest one
    long long maxPrime = -1;
 
    // Prlong long the number of 2s that divide n
    while (n % 2 == 0) {
        maxPrime = 2;
        n >>= 1; // equivalent to n /= 2
    }
  // n must be odd at this polong long
     while (n % 3 == 0) {
        maxPrime = 3;
        n=n/3;
    }
 
    // now we have to iterate only for long longegers
    // who does not have prime factor 2 and 3
    for (long long i = 5; i <= sqrt(n); i += 6) {
        while (n % i == 0) {
            maxPrime = i;
            n = n / i;
        }
      while (n % (i+2) == 0) {
            maxPrime = i+2;
            n = n / (i+2);
        }
    }
 
    // This condition is to handle the case
    // when n is a prime number greater than 4
    if (n > 4)
        maxPrime = n;
 
    return maxPrime;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        map<long long,long long>mp;
        long long maxi = 0;
        long long n1 = n;
        while(n!=1){
            long long hp = maxPrimeFactors(n);
            while(n%hp == 0){
                n/=hp;
                mp[hp]++;
                maxi = max(maxi,mp[hp]);
            }
        }
        n=n1;
        cout<<maxi<<endl;
        long long num =1;
        for(auto val : mp){
            if(val.second==maxi){
                num=val.first;
                break;
            }
        }
        if(maxi==1){
            cout<<n<<endl;
            continue;
        }
        long long num1=1;
        for(long long i=0;i<maxi-1;i++){
        cout<<num<<" ";
        num1*=num;
        }
        cout<<(n/num1)<<endl;
    }
    return 0;
}