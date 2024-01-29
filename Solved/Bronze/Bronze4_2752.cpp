#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> vec;
  int a, b, c = 0;
  cin >> a >> b >> c;

  vec.push_back(a);
  vec.push_back(b);
  vec.push_back(c);

  sort(vec.begin(), vec.end());

  for (auto a : vec) {
    cout << a << "\n";
  }

  return 0;
}
