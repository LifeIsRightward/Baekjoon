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

double a, b;

int main() {
  fastIo;

  cin >> a >> b;

  if (a - (a * (b * 0.01)) >= 100) {
    cout << "0";
  } else {
    cout << "1";
  }
  return 0;
}