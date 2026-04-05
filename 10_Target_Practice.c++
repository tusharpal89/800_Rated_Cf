#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
     
     char grid[10][10];
      int cnt = 0;
      
      for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
               
           if(grid[i][j] == 'X'){
               
             if(i==0 || j==0 || i==9 || j==9){
                cnt +=1;
            }
            
           else if(i==1 || j==1 || i==8|| j==8){
                cnt +=2;
            }
            
           else if(i==2 || j==2 || i==7 || j==7){
                cnt +=3;
            }
            
          else  if(i==3 || j==3 || i==6 || j==6){
                cnt +=4;
            }
            
            else{
                cnt +=5;
            }
               
               
           }
                }
            }
            
            cout << cnt << endl;
         
}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);  cout.tie(0);

      int t;
      cin>>t;
      while(t--){

         solve();
      }

}