#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(d < b){
        cout << -1 << endl;
        return;
    }
    int moves_up_right = d - b;
    int current_x = a + moves_up_right;
    if(current_x < c){
        cout << -1 << endl;
        return;
    }
    int moves_left = current_x - c;
    cout << moves_up_right + moves_left << endl;
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