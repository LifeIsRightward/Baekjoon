#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long repeat = 0;
  // int 여도 무관
  int a, b = 0;

  cin >> repeat;

  while (repeat) {
    cin >> a >> b;
    cout << a + b << "\n";
    repeat--;
  }

  return 0;
}