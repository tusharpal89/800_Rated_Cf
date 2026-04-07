#include<bits/stdc++.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define int long long
#define endl '\n'
void solve() {
    
   int n;    // length of Seq. b
   cin >> n;

   
   vector<int> v(n);
   for(int i=0; i<n; i++){
       cin >> v[i];
   }
   
   if(n == 1){
       cout << 1 << endl;
       cout << v[0] << endl;
       return;
   }
   
   set<int> s(v.begin(),v.end());
   
   if(s.size() == 1){
       cout << v.size() << endl;
     for(int j=0; j<n; j++){
       cout << v[j] << " ";
      }
      
      return;
   }
   
   
   vector<int> v2;
   
   v2.push_back(v[0]);
   
    for(int k=1; k<n; k++){
         if(v[k] >= v[k-1]){
             v2.push_back(v[k]);
         }
         
         else if(v[k] < v[k-1]){
             
             v2.push_back(v[k]);
             v2.push_back(v[k]);
             
         }
   }
   
    cout << v2.size() << endl;
   for(int l=0; l<v2.size(); l++){
       cout << v2[l] << " ";
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