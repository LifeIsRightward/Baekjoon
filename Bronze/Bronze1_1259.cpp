#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while (true) {
    string str;
    cin >> str;

    int startindex = 0;
    int lastindex = str.length() - 1;
    int rightcnt = 0;
    if (str[0] == '0') {
      break;
    } else {
      for (int i = 0; i < str.length() / 2; i++) {
        if (str[startindex] == str[lastindex]) {
          startindex++;
          lastindex--;
          rightcnt++;
        }
      }
    }

    if (rightcnt == str.length() / 2) {
      cout << "yes"
           << "\n";
    } else {
      cout << "no"
           << "\n";
    }
  }
  return 0;
}
