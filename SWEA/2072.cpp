#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int t = 0;

int main() {
  fastIo;

  cin >> t;

  for (int i = 0; i < t; i++) {
    vector<int> vec(10);
    int total = 0;

    cout << "#" << i + 1 << " ";
    for (int j = 0; j < 10; j++) {
      cin >> vec[j];
    }

    for (auto a : vec) {
      if (a != 0 || a % 2 != 0) {
        total += a;
        cout << a << "\n";
      }
    }

    cout << total << "\n";
  }

  return 0;
}
