#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> vec;
  int n, tmp = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> tmp;
    vec.push_back(tmp);
  }

  // 정렬(sort) 후 unique + erase
  sort(vec.begin(), vec.end());
  vec.erase(unique(vec.begin(), vec.end()), vec.end());

  for (auto a : vec) {
    cout << a << " ";
  }

  return 0;
}