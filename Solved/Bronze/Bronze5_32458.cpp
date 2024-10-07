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
int main() {
  fastIo;

  getline(cin, str);

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == '.') {
      break;
    }
    cout << str[i];
  }

  return 0;
}
