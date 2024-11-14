#include <bits/stdc++.h>

using namespace std;

int testcase = 0;
long long l, u, x = 0;

int main() {
  cin >> testcase;

  for (int i = 0; i < testcase; i++) {
    cin >> l >> u >> x;

    cout << "#" << i + 1 << " ";

    if (x > u) {
      cout << "-1" << "\n";
    } else if (x >= l && x <= u) {
      cout << "0" << "\n";
    } else if (x <= u) {
      cout << l - x << "\n";
    }
  }

  return 0;
}