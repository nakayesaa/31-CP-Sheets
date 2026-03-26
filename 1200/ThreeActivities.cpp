//idea :
//basically just pick the top 3 from each row, then choose the 3 largest overall
//and ensure that there are no overlaps with the prev one

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];
    
    vector<pair<int,int>> A, B, C;
    for (int i = 0; i < n; i++) {
      A.push_back({a[i], i});
      B.push_back({b[i], i});
      C.push_back({c[i], i});
    }

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
    sort(C.rbegin(), C.rend());

    long long ans = 0;
    
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
          int ia = A[i].second;
          int ib = B[j].second;
          int ic = C[k].second;
          
          if (ia != ib && ia != ic && ib != ic) {
            long long sum = A[i].first + B[j].first + C[k].first;
            ans = max(ans, sum);
          }
        }
      }
    }

    cout << ans << '\n';
  }

  return 0;
}