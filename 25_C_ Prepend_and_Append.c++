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
  
  
  if(s.size() == '1'){
      cout << 1 << endl;
      return;
  }
  
  else{
      
      while((s[0] == '1' && s[s.size()-1] == '0') ||(s[0] == '0' && s[s.size()-1] == '1' )){
          
          s.pop_back();
          s.erase(0, 1);
      }
      
     cout << s.size() << endl;
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