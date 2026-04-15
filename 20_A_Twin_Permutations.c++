#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
   int n;
  cin >> n;
  
  vector<int> a(n);
  for(int i=0; i<n; i++){
      cin >> a[i];
  }
  
  vector<int> b(n);
   for(int i=0; i<n; i++){
      b[i] = n + 1 - a[i];
  }
    
    for(int j=0; j<n; j++){
          cout << b[j] << " ";
  }   
  
  cout << endl;
    
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