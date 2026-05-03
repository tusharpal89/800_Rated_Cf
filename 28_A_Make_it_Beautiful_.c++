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
  
  for(int i=0; i<n; i++) cin >> v[i];
   
   int maxi = *max_element(v.begin(), v.end());
   
   for(int i=1; i<n; i++){
       if(v[i] == maxi){
           swap(v[0],v[i]);
       }
   }
   
   
  
  set<int> s(v.begin(),v.end());
  
  if(s.size() == 1){
      cout << "NO" << endl;
      return;
  }
  
  else{
      cout << "YES" << endl;
      
      for(int i=0; i<n; i++){
          cout << v[i] << " ";
      }
      
      cout << endl;
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