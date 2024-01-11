#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 0;
  string str;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> str;
    if (str.length() == 1) {
      cout << str[0] << str[0] << "\n";
    } else {
      cout << str[0] << str[str.length() - 1] << "\n";
    }
  }

  return 0;
}
