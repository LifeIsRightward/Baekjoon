#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int n, m, k = 0;

int main() {
  cin >> n >> m >> k;

  cout << min(m, k) + min(n - m, n - k);

  return 0;
}