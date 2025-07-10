#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    int n,k;
    cin >> n >>k;    
    vector<int> v1(n);
    
    for( int i=0; i<n; i++){
        cin >> v1[i];
    }

    vector<int> v2 = v1;
    sort(v2.begin(), v2.end());
    
    if(k==1 && v1 != v2) cout << "NO" << endl;
    else cout << "YES" << endl;
   
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