#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
   int n,k;
   cin >> n >> k;
   int count = 0;
   
   vector<int> v(n);
   for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i] == k) count++;
   }
   
   if(count >=1 ) cout << "YES" << endl;
   else cout << "NO" << endl;
        
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