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
    for(int i=0; i<n; i++) cin >> v[i];
    
    int total_twos = 0;
    for(int x : v){
        if(x == 2) total_twos++;
    }
    
    int left_twos = 0;
    
    for(int k=0; k<n-1; k++){
        if(v[k] == 2) left_twos++;
        
        int right_twos = total_twos - left_twos;
        
        if(left_twos == right_twos){
            cout << k+1 << endl; 
            return;
        }
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