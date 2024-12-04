#include <bits/stdc++.h>

using namespace std;

int main() {
  // FAST IO
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  pair<int, int> tmp;

  cin >> tmp.first >> tmp.second;

  if (tmp.first > tmp.second) {
    cout << "flight" << "\n";
  } else {
    cout << "high speed rail" << "\n";
  }
  return 0;
}