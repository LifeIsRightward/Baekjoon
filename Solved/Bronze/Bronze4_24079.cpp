#include <bits/stdc++.h>

using namespace std;

int main() {
  // FAST IO
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  double x, y, z = 0;

  cin >> x >> y >> z;

  if (x + y <= (z + 0.5)) {
    cout << "1" << "\n";
  } else {
    cout << "0" << "\n";
  }

  return 0;
}