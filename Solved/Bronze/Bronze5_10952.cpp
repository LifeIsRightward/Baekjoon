#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b = 0;

  while (true) {
    cin >> a >> b;
    if (a == 0 && b == 0) {
      break;
    } else {
      cout << a + b << "\n";
    }
  }

  return 0;
}