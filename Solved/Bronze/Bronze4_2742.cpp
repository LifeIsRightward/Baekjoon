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
    cout << i << "\n";
  }
  return 0;
}
