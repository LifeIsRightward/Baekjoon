#include <bits/stdc++.h>

using namespace std;

int main() {
  // FAST IO
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int testcase = 0;

  int tmp = 0;

  cin >> testcase;

  for (int i = 0; i < testcase; i++) {
    cin >> tmp;

    int plus = 0;
    int stick = 0;

    plus = tmp / 5;
    stick = tmp % 5;

    for (int j = 0; j < plus; j++) {
      cout << "++++" << " ";
    }

    for (int q = 0; q < stick; q++) {
      cout << "|";
    }

    cout << "\n";
  }

  return 0;
}