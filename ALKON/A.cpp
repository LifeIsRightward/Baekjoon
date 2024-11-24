#include <bits/stdc++.h>

using namespace std;

int n = 0;
bool flag = false;

int main() {
  // FastIO
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (int i = 2; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      if (n == (i * j) || i == n || j == n) {
        flag = true;
        break;
      }
    }
  }

  if (flag) {
    cout << "1";
  } else {
    cout << "0";
  }
  return 0;
}