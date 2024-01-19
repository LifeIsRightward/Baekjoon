#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 0;
  cin >> N;

  char temp = 0;
  unsigned long long M = 0;
  int mod = 1234567891;
  unsigned long long total = 0;

  for (int i = 0; i < N; i++) {
    cin >> temp;
    if (i == 0) {
      total += (((temp - '`') * 1));
      total = total % mod;
      M = 31;
    } else {
      total += (((temp - '`') * M));
      total = total % mod;
      M = (M * 31) % mod;
    }
  }
  cout << total;
  return 0;
}

//(1 * 31 ^ 1 + 2 * 31 ^ 2 + 3 * 31 ^ 3 + 4 * 31 ^ 4 + 5 * 31 ^ 5) % 1234567891