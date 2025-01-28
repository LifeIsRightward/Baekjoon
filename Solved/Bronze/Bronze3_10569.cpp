#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc = 0;
  pair<int, int> tmp;

  cin >> tc;

  for (int i = 0; i < tc; i++) {
    cin >> tmp.first >> tmp.second;

    cout << 2 - tmp.first + tmp.second << "\n";
  }

  return 0;
}