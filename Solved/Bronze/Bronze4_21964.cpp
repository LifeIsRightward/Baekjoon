#include <iostream>
#include <string>

using namespace std;

#define Fastio                       \
  ios_base ::sync_with_stdio(false); \
  cin.tie(NULL);                     \
  cout.tie(NULL);

int len = 0;
string str;

int main() {
  Fastio;

  cin >> len;
  cin >> str;

  for (int i = 0; i < len; i++) {
    if (i >= len - 5) {
      cout << str[i];
    }
  }
  return 0;
}