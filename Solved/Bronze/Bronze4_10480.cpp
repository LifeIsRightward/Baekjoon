#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int a, tmp = 0;
bool flag = false;  // 음수일 때 True

int main() {
  fastIo;

  cin >> a;

  for (int i = 0; i < a; i++) {
    flag = false;
    cin >> tmp;
    if (tmp < 0) {
      tmp = tmp * -1;
      flag = true;
    }

    if (tmp % 2 == 0) {
      if (flag) {
        cout << -1 * tmp << " is even" << "\n";
      } else {
        cout << tmp << " is even" << "\n";
      }
    } else {
      if (flag) {
        cout << -1 * tmp << " is odd" << "\n";
      } else {
        cout << tmp << " is odd" << "\n";
      }
    }
  }

  return 0;
}
