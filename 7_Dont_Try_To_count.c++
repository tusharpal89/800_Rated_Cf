#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
     int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    
    int ops = 0;
   
    for(ops=0; ops<= 5; ops++){
       
        if(x.find(s) != string::npos){
            cout << ops << endl;
            return;
        }
       
        x += x;
    }

    cout << -1 << endl;
    
    
    
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