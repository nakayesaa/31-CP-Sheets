#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin >> t;
  while(t--){
      int n;
      cin >> n;
      
      vector<int> x(n), y(n);
      for(int i = 0; i<n;i++) cin >> x[i];
      for(int i = 0; i<n;i++) cin >> y[i];
      
      vector<int> z(n);
      for(int i = 0; i<n;i++) z[i] = y[i] - x[i];
      
      sort(z.begin(), z.end());
      int l = 0, r = n-1, ans = 0;
      
      while(l < r){
        if(z[l] + z[r] >= 0){
          ans++;
          l++;
          r--;
        }else l++;
      }
      
      cout << ans << "\n";
  }
}