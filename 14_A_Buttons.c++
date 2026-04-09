#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
  int a,b,c;
  cin >> a >> b >> c;
  
  if( c % 2 == 1){
      
      if(b>a) cout << "Second" << endl;
      
      else cout << "First" << endl;
  } 
  
  else {
      
      if(a > b) cout << "First" << endl;
      
      else cout << "Second" << endl;
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