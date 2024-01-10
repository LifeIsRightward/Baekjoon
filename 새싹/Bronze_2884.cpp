#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int T, M = 0;
  cin >> T >> M;

  if (M - 45 >= 0) {
    cout << T << " " << M - 45;
  } else {
    M = M - 45 + 60;
    T = T - 1;
    if (T >= 0) {
      cout << T << " " << M;
    } else {
      T = 23;
      cout << T << " " << M;
    }
  }

  return 0;
}
