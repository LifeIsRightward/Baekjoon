#include <bits/stdc++.h>

using namespace std;

int main() {
  // FastIO
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n = 0;
  int a, b, c = 0;
  int total = 0;

  cin >> n;

  cin >> a >> b >> c;

  if (n - a <= 0) {
    total += n;
  } else {
    total += a;
  }

  if (n - b <= 0) {
    total += n;
  } else {
    total += b;
  }

  if (n - c <= 0) {
    total += n;
  } else {
    total += c;
  }

  cout << total << "\n";

  return 0;
}