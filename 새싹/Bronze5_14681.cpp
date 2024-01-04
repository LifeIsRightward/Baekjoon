#include <iostream>

using namespace std;

int main() {
  int x, y = 0;

  cin >> x >> y;

  // 1 사분면
  if (x > 0 && y > 0) {
    cout << 1;
  } else if (x > 0 && y < 0) {
    // 4 사분면
    cout << 4;
  } else if (x < 0 && y > 0) {
    // 2 사분면
    cout << 2;
  } else if (x < 0 && y < 0) {
    // 3 사분면
    cout << 3;
  }

  return 0;
}