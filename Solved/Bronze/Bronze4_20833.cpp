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

int a, total = 0;

int main() {
  fastIo;

  cin >> a;

  for (int i = 1; i <= a; i++) {
    total += pow(i, 3);
  }

  cout << total;

  return 0;
}