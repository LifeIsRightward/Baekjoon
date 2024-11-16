#include <bits/stdc++.h>

using namespace std;

int n, cnt = 0;
string str;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> str;

    str = str.substr(2);

    // cout << str << "\n";
    if (stoi(str) <= 90) {
      cnt++;
    }
  }

  cout << cnt;
}