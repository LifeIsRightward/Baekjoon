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
long long nfact = 1;
// '주'의 단위
long long mkweek = 60 * 60 * 24 * 7;

int main() {
  fastIo;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    nfact *= i;
  }

  cout << nfact / mkweek;

  return 0;
}