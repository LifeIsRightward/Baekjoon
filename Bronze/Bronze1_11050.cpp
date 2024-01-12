#include <iostream>
#include <vector>
// 조합 Combination
using namespace std;

long long up = 1, down = 1;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k = 0;

  cin >> n >> k;

  for (int i = n; i > n - k; i--) {
    up *= i;
  }

  //   cout << up << "\n";

  for (int j = k; j > 0; j--) {
    down *= j;
  }
  //   cout << down << "\n";
  cout << up / down;
  return 0;
}
