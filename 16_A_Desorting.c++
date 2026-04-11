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
  
   int ops = INT_MAX;
   
   for(int i=0; i< n-1; i++){
       
       if(v[i] <= v[i+1])
       {
           int diff = v[i + 1] - v[i];
           int req_ops = diff / 2 + 1;
           ops = min(ops,req_ops);
       }
       
       else ops = 0;
   }
   
   
   cout << ops << endl;
    
    
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