#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int count = 0;
  string str;
  cin >> str;

  for (int i = 0; i < str.length(); i++) {
    if (isspace(str[i])) {
      cout << str[i];
      count++;
    }
  }

  cout << count + 1;

  return 0;
}
