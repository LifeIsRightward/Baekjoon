#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int R1, R2, S = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> R1 >> S;

  R2 = (2 * S) - R1;

  cout << R2;

  return 0;
}
