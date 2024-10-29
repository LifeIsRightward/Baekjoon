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

int n = 0;

int main() {
  fastIo;

  cin >> n;

  for (int i = n; i >= 0; i--) {
    cout << i << " ";
  }

  return 0;
}