#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int n = 0;
int a, b = 0;

int main() {
  fastIo;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    cout << gcd(a, b) << "\n";
  }
  return 0;
}
