#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int testcase = 0;
  int total = 0;
  int add = 0;
  cin >> testcase;
  string str;

  for (int i = 0; i < testcase; i++) {
    cin >> str;
    add = 0;
    total = 0;
    for (int j = 0; j < str.length(); j++) {
      if (str[j] == 'O') {
        add++;
        total += add;
        // cout << add << " ";
      } else {
        add = 0;
      }
    }
    cout << total << "\n";
  }
  return 0;
}
