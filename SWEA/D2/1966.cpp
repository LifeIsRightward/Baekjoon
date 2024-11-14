#include <bits/stdc++.h>

using namespace std;

int testcase = 0;
int n, tmp = 0;
vector<int> vec;

int main() {
  cin >> testcase;

  for (int i = 0; i < testcase; i++) {
    cin >> n;

    vec.clear();
    for (int j = 0; j < n; j++) {
      cin >> tmp;
      vec.push_back(tmp);
    }

    sort(vec.begin(), vec.end());

    cout << "#" << i + 1 << " ";
    for (auto a : vec) {
      cout << a << " ";
    }

    cout << "\n";
  }

  return 0;
}