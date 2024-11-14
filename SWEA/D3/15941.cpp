#include <bits/stdc++.h>

using namespace std;

int testcase = 0;
int n = 0;

int main() {
  cin >> testcase;

  for (int i = 0; i < testcase; i++) {
    cin >> n;

    cout << "#" << i + 1 << " " << pow(n, 2) << "\n";
  }

  return 0;
}