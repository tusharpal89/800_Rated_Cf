#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
  
    int n;
    cin >> n;
    
    int neg = 0, pos = 0;
    
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x == -1) neg++;
        else pos++;
    }
    
    int ans = 0;
    
    while(neg > pos){
        neg--;
        pos++;
        ans++;
    }
    
    if(neg % 2 != 0){
        ans++;
        neg--;
        pos++;
    }
    
    
    cout << ans << endl;
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