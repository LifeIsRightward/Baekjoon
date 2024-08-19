#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

string str;
int n = 0;
char target;
int cnt = 0;

int main() {
  fastIo;
  cin >> n;
  cin >> target;

  for (int i = 1; i <= n; i++) {
    str += to_string(i);
  }

  for (auto a : str) {
    if (a == target) {
      cnt++;
    }
  }

  cout << cnt;
  return 0;
}
