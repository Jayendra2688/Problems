#include<bits/stdc++.h>
using namespace std;
double dis(int x1,int y1,int x2,int y2){
    return 1.0*sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int p1,p2;
        cin>>p1>>p2;
        int a1,a2;
        cin>>a1>>a2;
        int b1,b2;
        cin>>b1>>b2;
        double OA = dis(0,0,a1,a2);
        double OB = dis(0,0,b1,b2);
        double PA = dis(p1,p2,a1,a2);
        double PB = dis(p1,p2,b1,b2);
        double AB = dis(a1,a2,b1,b2);
        if(OA<=OB && PA<=PB){
            cout<<fixed<<setprecision(10)<<max(OA,PA)<<endl;
        }else if(OB<=OA && PB<=PA){
            cout<<fixed<<setprecision(10)<<max(OB,PB)<<endl;   
        }else{
            cout<<fixed<<setprecision(10)<<max(max(min(OA,OB),min(PA,PB)),AB/2.0)<<endl;
        }
    }
    return 0;
}