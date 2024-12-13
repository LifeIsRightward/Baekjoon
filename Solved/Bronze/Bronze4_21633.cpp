#include <bits/stdc++.h>

using namespace std;

int main() {
  // FAST IO
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long double x = 0;
  long double tmp = 0;

  cin >> x;

  tmp = 25 + (x * 0.01);

  cout << fixed;
  cout.precision(2);

  if (tmp < 100) {
    cout << 100.00 << "\n";
  } else if (tmp >= 100 && tmp <= 2000) {
    cout << tmp << "\n";
  } else if (tmp > 2000) {
    cout << 2000.00 << "\n";
  }

  return 0;
}