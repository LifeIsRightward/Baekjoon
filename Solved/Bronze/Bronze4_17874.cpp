#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int a, b, c = 0;

int main() {
  fastIo;

  cin >> a >> b >> c;

  if (a - b > b) {
    b = a - b;
  }

  if (a - c > c) {
    c = a - c;
  }

  cout << b * c * 4;

  return 0;
}
