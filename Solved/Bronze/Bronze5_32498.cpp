#include <iostream>
#include <vector>
using namespace std;

int t = 0;
int tmp = 0;
int total = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> t;

  for (int i = 0; i < t; i++) {
    cin >> tmp;

    if (tmp % 2 != 0) {
      total++;
    }
  }

  cout << total;
  return 0;
}
