#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, Quiz = 0;
  string tmpstr;
  map<string, int> MP;
  map<int, string> MP2;

  cin >> N >> Quiz;
  for (int i = 1; i <= N; i++) {
    cin >> tmpstr;
    MP.insert({tmpstr, i});
    MP2.insert({i, tmpstr});
  }

  for (int q = 1; q <= Quiz; q++) {
    cin >> tmpstr;

    if (!isdigit(tmpstr[0])) {  // 문자열인 경우
      auto FM = MP.find(tmpstr);
      if (FM != MP.end()) {
        cout << FM->second << "\n";
      }
    } else {  // 숫자인 경우
      auto FM2 = MP2.find(stoi(tmpstr));
      if (FM2 != MP2.end()) {
        cout << FM2->second << "\n";
      }
    }
  }

  return 0;
}
