#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, T = 0;

  cin >> T;

  for (int i = 1; i <= T; i++) {
    cin >> a >> b;
    cout << "Case #" << i << ": " << a + b << "\n";
  }
  return 0;
}
