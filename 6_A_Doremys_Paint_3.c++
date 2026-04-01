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
    
      map<int,int> mp;
      for(int i=0; i<n; i++){
          mp[v[i]]++;
      }
      
      if(mp.size()>=3){
          cout << "No" << endl;
      }
      
      else{
          int f1 = mp.begin()->second;
          int f2 = mp.rbegin()->second;
        
        if(f1 == f2) cout << "Yes" <<endl;
        
        else if(n % 2 ==1 && abs(f1 - f2) == 1) cout << "Yes" << endl;
        
        else cout << "No" << endl;
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