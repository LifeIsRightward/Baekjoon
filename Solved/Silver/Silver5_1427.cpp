#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  unsigned long long N = 0;
  vector<int> vec;

  cin >> N;

  while (N) {
    vec.push_back(N % 10);
    N /= 10;
  }

  sort(vec.rbegin(), vec.rend());

  for (const auto a : vec) {
    cout << a;
  }

  return 0;
}
