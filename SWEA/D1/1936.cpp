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

int a, b = 0;

int main() {
  fastIo;

  cin >> a >> b;

  if (a + b == 3) {
    if (a == 2) {
      cout << "A";
    } else {
      cout << "B";
    }
  } else if (a + b == 4) {
    if (a == 1) {
      cout << "A";
    } else {
      cout << "B";
    }
  } else if (a + b == 5) {
    if (a == 3) {
      cout << "A";
    } else {
      cout << "B";
    }
  }

  return 0;
}