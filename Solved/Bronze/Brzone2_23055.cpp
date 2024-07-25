#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;

  for (int j = 1; j <= n; j++) {
    // 맨 첫 번째 줄, 마지막 줄
    if (j == 1 || j == n) {
      for (int i = 0; i < n; i++) {
        cout << "*";
      }
    } else {
      cout << "*";
      for (int q = 2; q < n; q++) {
        if (q == j || q == n - j + 1) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
      cout << "*";
    }
    cout << "\n";
  }

  return 0;
}
