#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int testcase = 0;
  int a = 0;
  int b = 0;
  int temp = 1;

  cin >> testcase;

  for (int i = 0; i < testcase; i++) {
    cin >> a >> b;
    for (int j = 0; j < b; j++) {
      temp = (temp * a) % 10;
    }
    if (temp == 0) {
      cout << 10 << "\n";
    } else {
      cout << temp << "\n";
    }
    temp = 1;
  }
  return 0;
}
