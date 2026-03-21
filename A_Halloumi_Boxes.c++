#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
    int n,k;
    cin >> n >> k;
    
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    vector<int> v2 = v;
   sort(v2.begin(), v2.end());

    
    if( v2 == v) cout << "YES" << endl;
    else if(k > 1) cout << "YES" << endl;
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