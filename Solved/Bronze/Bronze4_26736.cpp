#include <bits/stdc++.h>

using namespace std;

int main() {
  // FAST IO
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string str;

  int acnt = 0;
  int bcnt = 0;

  cin >> str;

  for (const auto a : str) {
    if (a == 'A') {
      acnt++;
    } else if (a == 'B') {
      bcnt++;
    }
  }

  cout << acnt << " : " << bcnt << "\n";

  return 0;
}