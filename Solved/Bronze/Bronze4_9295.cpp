#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int T = 0;
int tmp1, tmp2 = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> T;

  for (int i = 1; i <= T; i++) {
    cin >> tmp1 >> tmp2;
    cout << "Case " << i << ": " << tmp1 + tmp2;
    cout << "\n";
  }

  return 0;
}
