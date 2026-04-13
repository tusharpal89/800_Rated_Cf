#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
  int x,k;
  cin >> x >> k;
  vector<int> v;
  
  if(x % k == 0){
      
       cout << 2 << endl;
       cout << x -1 << " " << 1 << endl;
       return;
  }
      
      else{
          
          cout << 1 << endl;
          cout << x << endl;
          
          return;
      }
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