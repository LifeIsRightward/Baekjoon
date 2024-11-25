#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int testcase = 0;

  cin >> testcase;

  for (int i = 0; i < testcase; i++) {
    int a = 0;
    int b = 0;
    int c = 0;

    int cnt = 0;

    cin >> a >> b >> c;

    for (int j = 1; j <= a; j++) {
      for (int q = 1; q <= b; q++) {
        for (int k = 1; k <= c; k++) {
          if ((j % q) == (q % k) && (q % k) == (k % j) && (k % j) == (j % q)) {
            // cout << "(" << j << " , " << q << " , " << k << ")" << "\n";
            cnt++;
          }
        }
      }
    }

    cout << cnt << "\n";
  }

  return 0;
}