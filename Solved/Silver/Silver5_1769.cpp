#include <algorithm>
#include <deque>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int main() {
  fastIo;

  string s;
  cin >> s;

  long long sum = 0;
  int cnt = 0;

  if (s.length() == 1) {
    sum = s[0] - '0';
  } else {
    while (s.length() > 1) {
      sum = 0;
      for (int i = 0; i < s.length(); i++) {
        sum += s.at(i) - '0';
      }

      s = to_string(sum);
      cnt++;
    }
  }

  //   cout << sum << "\n";
  cout << cnt << "\n";

  cout << ((sum % 3 == 0) ? "YES" : "NO");
}