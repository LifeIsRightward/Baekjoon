#include <bits/stdc++.h>

using namespace std;

int n = 0;

vector<char> vec;
char cmpch, tmp;

int cnt = 0;

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    vec.push_back(tmp);
  }

  cin >> cmpch;

  for (auto a : vec) {
    if (a == cmpch) {
      cnt++;
    }
  }

  cout << cnt;

  return 0;
}