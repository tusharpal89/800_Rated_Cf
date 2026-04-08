#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int k=0; k<n; k++){
        cin >> a[k];
    }
    
    sort(a.begin(), a.end());

    if(a[0] == a[n-1]){
        cout << -1 << endl;
        return;
    }
    
    vector<int> b;
    vector<int> c;
    
    int max_val = a[n-1];

    for(int i = 0; i < n; i++){
        if(a[i] == max_val){
            c.push_back(a[i]);
        } else{
            b.push_back(a[i]);
        }
    }

    cout << b.size() << " " << c.size() << endl;

    for(int i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }
    cout << endl;
  
    
    
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