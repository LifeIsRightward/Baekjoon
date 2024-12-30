#include <bits/stdc++.h>

using namespace std;

int main() {
  string str;

  cin >> str;
  if (str[5] == '0') {
    if (str[6] - '0' < 9) {
      cout << "GOOD" << "\n";
    } else {
      if (str[8] - '0' < 1) {
        cout << "GOOD" << "\n";
      } else if (str[8] - '0' == 1 && str[9] - '0' < 7) {
        cout << "GOOD" << "\n";
      } else {
        cout << "TOO LATE" << "\n";
      }
    }
  } else {
    cout << "TOO LATE" << "\n";
  }

  return 0;
}