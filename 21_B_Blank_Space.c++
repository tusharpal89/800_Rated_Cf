#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
   int n;
   cin >> n;
   
   vector<int> v(n);
   for(int i=0; i<n; i++){
       cin >> v[i];
   }
   
   set<int> s(v.begin(),v.end());
   
   if(s.find(0) == s.end()){
       cout << 0 << endl;
       return;
   }
   
    int global_max = 0;
    int current_streak = 0;
    

     for(int j=0; j<n; j++){
          if(v[j] == 0){
               
              current_streak++;
          global_max = max(global_max,current_streak);
       }
       
       else {
           current_streak = 0;
       }
   }
       
   
    cout << global_max << endl;
      
   
 
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