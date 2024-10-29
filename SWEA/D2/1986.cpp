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

int t = 0;
int n = 0;
int result = 0;

// true = +, false = -
bool flag = true;

int main() {
  fastIo;

  cin >> t;

  for (int i = 0; i < t; i++) {
    flag = true;
    result = 0;

    cin >> n;
    for (int j = 1; j <= n; j++) {
      if (flag) {
        result += j;
        flag = !flag;
      } else {
        result -= j;
        flag = !flag;
      }
    }

    cout << "#" << i + 1 << " " << result << "\n";
  }
  return 0;
}