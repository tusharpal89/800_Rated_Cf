#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
  int n;
  cin >> n;
  
  string s;
  cin >> s;
  int actual_cnt = 0;

  for(int i=0; i<s.length(); i++){
      
      if(s[i] == '.'){
          actual_cnt++;
      }
  }
  
  for(int i=0; i<s.length(); i++){
    if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
          cout << 2 << endl;
          return;
    }
  }
  
  cout << actual_cnt << endl;
    
    
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