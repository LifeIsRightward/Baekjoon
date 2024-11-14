#include <bits/stdc++.h>

using namespace std;

int n, cnt = 0;
string str;

int main() {
  cin >> n;

  for (int i = 1; i <= n; i++) {
    str = to_string(i);
    cnt = 0;

    for (auto a : str) {
      if ((a - '0') % 3 == 0 && (a - '0') != 0) {
        cnt++;
      }
    }

    if (cnt > 0) {
      for (int j = 0; j < cnt; j++) {
        cout << "-";
      }
    } else {
      cout << str;
    }

    cout << " ";
  }

  return 0;
}