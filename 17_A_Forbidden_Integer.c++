#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
  int n,k,x;
    cin >> n >> k >> x;

    if(x != 1){
   
        cout << "YES" << endl;
        cout << n << endl;
        for(int i=0; i<n; i++){
            cout << 1 << (i== n-1 ? "" : " ");
        }
        cout << endl;
    } else {

        if(k==1 || (n%2 != 0 && k<3)){
 
            cout << "NO" << endl;
        } else{
            cout << "YES" << endl;
            if (n % 2 == 0){

                cout << n / 2 << endl;
                for(int i=0; i< n/2; i++){
                    cout << 2 << (i == (n/2) - 1 ? "" : " ");
                }
                cout << endl;
            } else {
  
                cout << (n-3) / 2 + 1 << endl;
                cout << 3;
                for(int i=0; i<(n-3) / 2; i++){
                    cout << " " << 2;
                }
                cout << endl;
            }
        }
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