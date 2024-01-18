#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string str;
  cin >> str;

  int num = 0;
  for (int i = 0; i < str.length(); i++) {
    num *= 16;
    if (str[i] >= 'A' && str[i] <= 'F') {
      num += str[i] - 'A' + 10;
    } else {
      num += str[i] - '0';
    }
  }

  cout << num;
  return 0;
}
