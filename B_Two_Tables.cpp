#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        int a1,b1;
        cin>>a1>>b1;
        int a2,b2;
        cin>>a2>>b2;
        int a,b;
        cin>>a>>b;
        double ans  = 0;
        if((a<=a1 || b<=b1) || (a<=(w-a2) || b<=(h-b2))){
            cout<<fixed<<setprecision(9)<<ans<<endl;
        }else if(a+(a2-a1)>w && b+(b2-b1)>h){
            cout<<-1<<endl;
        }else{
            int ans1 = INT_MAX;
            int ans2 = INT_MAX;
            int ans3 = INT_MAX;
            int ans4 = INT_MAX;
            if((a-a1)<=(w-a2)){
                ans1=a-a1;
            }
            if((b-b1)<=(h-b2)){
                ans2=b-b1;
            }
            if((a-(w-a2))<=a1){
                ans3=a-(w-a2);
            }
            if((b-(h-b2))<=b1){
                ans4 = b-(h-b2);
            }
            double ans = 1.0 * min(min(ans1,ans2),min(ans3,ans4));
            cout<<fixed<<setprecision(9)<<ans<<endl;

        }
    }
    return 0;
}