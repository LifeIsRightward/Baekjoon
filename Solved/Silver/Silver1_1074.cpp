#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int N, r, c;
int result;

void Z(int y, int x, int size) {
  if (y == r && x == c) {
    cout << result << "\n";
    return;
  }

  if (r < y + size && r >= y && c < x + size && c >= x) {
    // 1 사분면 탐색
    Z(y, x, size / 2);
    // 2 사분면 탐색
    Z(y, x + size / 2, size / 2);
    // 3 사분면 탐색
    Z(y + size / 2, x, size / 2);
    // 4 사분면 탐색
    Z(y + size / 2, x + size / 2, size / 2);
  } else {
    result += size * size;
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> N >> r >> c;
  Z(0, 0, (1 << N));
  return 0;
}
