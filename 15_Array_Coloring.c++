#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
    int n;
    cin >> n;
    
    int total_sum = 0;
    for(int i=0; i<n; ++i){
        int a;
        cin >> a;
        total_sum += a;
    }

    if(total_sum % 2 == 0){
        cout<<"YES"<<endl;
    } else{
        cout << "NO" << endl;
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