#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;

  for (int i = n; i > 0; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}
