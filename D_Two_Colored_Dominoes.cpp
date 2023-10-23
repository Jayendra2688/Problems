#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        vector<vector<char>> v(a, vector<char>(b));
        vector<vector<char>> ans(a, vector<char>(b, '.'));
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                cin >> v[i][j];
                
            }
            
        }
        int f=1;
        for(int i=0;i<a;i++){
            int intersect=0;
            for(int j=0;j<b;j++){
                if(v[i][j]=='U'){
                    intersect++;
                    if(intersect%2==0){
                        ans[i][j]='W';
                        ans[i+1][j]='B';
                       
                    }else if(intersect%2==1){
                        ans[i][j]='B';
                        ans[i+1][j]='W';
                        
                    }
                    
                }
            }
            if(intersect%2==1){
                f=0;
                break;
            }
        }
        if(f==0){
            cout<<-1<<endl;
            continue;
        }
        for(int j=0;j<b;j++){
            int intersect=0;
            for(int i=0;i<a;i++){
                if(v[i][j]=='L'){
                    intersect++;
                    if(intersect%2==0){
                        ans[i][j]='W';
                        ans[i][j+1]='B';
                        
                    }else if(intersect%2==1){
                        ans[i][j]='B';
                        ans[i][j+1]='W';
                        
                    }
                }
            }
            if(intersect%2==1){
                f=0;
                break;
            }
        }
        if(f==0){
            cout<<-1<<endl;
        }else{
            for(int i=0;i<a;i++){
            
            for(int j=0;j<b;j++){
                cout<<ans[i][j];
            }
            cout<<endl;
           
        }
        }

    }
    return 0;
}