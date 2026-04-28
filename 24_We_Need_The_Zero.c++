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

    int total_xor = 0;

    for(int i=0; i<n; i++){
        total_xor ^= v[i];
    }

    if(n % 2 == 1){

        cout << total_xor << endl;
    }

    else{

        if(total_xor == 0) cout << total_xor << endl;

        else cout << -1 << endl;
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