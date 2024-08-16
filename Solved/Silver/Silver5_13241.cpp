#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

long long a, b = 0;

int main() {
  fastIo;

  cin >> a >> b;

  cout << lcm(a, b);
  return 0;
}
