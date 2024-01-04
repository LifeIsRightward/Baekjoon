#include <iostream>

using namespace std;

int main() {
  long long a, b = 0;

  cin >> a >> b;

  cout << max(a, b) - min(a, b);

  return 0;
}