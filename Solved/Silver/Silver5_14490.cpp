#include <algorithm>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>
using namespace std;

#define fastIo                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

string str;
string s1;
string s2;
bool flag = false;

int main() {
  fastIo;

  cin >> str;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == ':') {
      flag = true;
    }

    if (!flag) {
      s1 += str[i];
    } else {
      // 이 코드가 있어야 s2에 ':' 이게 안들어가 ㅇㅇ
      if (str[i] != ':') {
        s2 += str[i];
      }
    }
  }

  //   cout << s1 << "\n";
  //   cout << s2 << "\n";
  int ss1 = stoi(s1);
  int ss2 = stoi(s2);
  int ggcd = gcd(ss1, ss2);

  cout << ss1 / ggcd << ":" << ss2 / ggcd;

  return 0;
}
