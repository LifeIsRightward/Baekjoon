#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

long long a, b = 0;
long long total = 0;

int main() {
  fastIo;

  cin >> a >> b;
  cin >> total;

  if (a + b >= (2 * total)) {
    cout << (a + b) - (2 * total);
  } else {
    cout << a + b;
  }

  return 0;
}