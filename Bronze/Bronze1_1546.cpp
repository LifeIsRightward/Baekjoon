#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << fixed;
  cout.precision(2);

  float sub, temp, max, total = 0;
  cin >> sub;

  vector<float> vec(sub, 0);

  for (int i = 0; i < sub; i++) {
    cin >> temp;
    vec[i] = temp;
  }

  max = *max_element(vec.begin(), vec.end());
  for (auto &a : vec) {
    a = (a / max) * 100;
  }
  for (auto b : vec) {
    total += b;
  }

  cout << total / sub;
  return 0;
}