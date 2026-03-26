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

    int size = n * (n - 1) / 2;
    vector<int> b(size);
    for (int i = 0; i < size; i++) cin >> b[i];

    sort(b.begin(), b.end());

    vector<int> a;
    
    int ind = 0;
    for (int i = 0; i < n - 1; i++) {
      a.push_back(b[ind]);
      ind += (n - i - 1);
    }
    
    a.push_back(1000000000);
    for(int i = 0; i<a.size();i++) cout << a[i] << " ";
    cout << "\n";
  }

  return 0;
}