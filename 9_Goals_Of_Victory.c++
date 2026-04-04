#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
   
   int n;
   cin >> n;
   
   vector<int> v(n-1);
   
   for(int i=0; i<n-1; i++) cin >> v[i];
   
  int sum = 0;
  for(int i=0; i<n-1; i++){
      sum += v[i];
  }
   
   cout << -1*sum << endl;
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