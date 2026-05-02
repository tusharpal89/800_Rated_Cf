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

    int flag = 0;

    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){
             if( __gcd(v[i], v[j]) <= 2){
                flag = 1;
             }
        }
    }

    if(flag == 0) cout << "NO" << endl;

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