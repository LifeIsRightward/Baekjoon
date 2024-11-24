#include <bits/stdc++.h>

using namespace std;

int Lion = 0;
int Tiger = 0;

int main() {
  string str;

  for (int i = 0; i < 9; i++) {
    cin >> str;

    if (str[0] == 'L') {
      Lion++;
    } else {
      Tiger++;
    }
  }

  if (Lion > Tiger) {
    cout << "Lion";
  } else {
    cout << "Tiger";
  }
  return 0;
}