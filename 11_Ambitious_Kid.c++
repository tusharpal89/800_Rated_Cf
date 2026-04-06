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
      if(v[i] < 0){
          v[i] = -1 * v[i];
      }
    }
  
    int mini = *min_element(v.begin(), v.end());   
    
    cout << mini << endl;
}
signed main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);  cout.tie(0);

      int t=1;
    //  cin>>t;
      while(t--){

         solve();
      }

}