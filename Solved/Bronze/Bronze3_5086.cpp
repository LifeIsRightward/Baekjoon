#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b;
  bool factor;
  bool multiple;
  while (true) {
    factor = false;
    multiple = false;

    cin >> a >> b;
    if (a == 0 && b == 0) {
      break;
    } else {
      if (b / a != 0) {
        // cout << "dqd"
        //      << "\n";
        factor = true;
      }
      if (a / b != 0 && a % b == 0) {
        multiple = true;
        // cout << "qqq"
        //      << "\n";
      }

      if (factor) {
        cout << "factor"
             << "\n";
      } else if (multiple) {
        cout << "multiple"
             << "\n";
      } else if (!factor && !multiple) {
        cout << "neither"
             << "\n";
      }
    }
  }
  return 0;
}
