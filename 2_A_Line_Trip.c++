#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Distfrom 0 to first station
    int max_gap = a[0] - 0;

    // max dist b/w consecutive stations
    for (int i = 1; i < n; i++) {
        max_gap = max(max_gap, a[i] - a[i-1]);
    }

    // Twice the dist from last station to x
    max_gap = max(max_gap, 2 * (x - a[n-1]));

    cout << max_gap << endl;


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