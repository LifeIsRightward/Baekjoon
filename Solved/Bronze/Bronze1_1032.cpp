#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 0;
  cin >> N;

  string str;
  string cmpstr;

  cin >> str;  // 맨 첫번째 스트링받기
  // 맨 첫번째 스트링은 이미 위에서 받았으니, 한번 덜 돌면된다.
  for (int i = 0; i < N - 1; i++) {
    cin >> cmpstr;
    for (int j = 0; j < cmpstr.length(); j++) {
      if (cmpstr[j] != str[j]) {
        str[j] = '?';
      }
    }
  }

  cout << str;

  return 0;
}
