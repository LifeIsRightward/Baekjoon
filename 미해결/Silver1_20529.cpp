#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Testcase = 0;
int N = 0;
int dist = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<string> strvec;
  string tempstr;

  cin >> Testcase;
  for (int i = 0; i < Testcase; i++) {
    cin >> N;
    for (int j = 0; j < N; j++) {
      cin >> tempstr;
      strvec.push_back(tempstr);
    }
    // 함수 처리
    for (int i = 0; i < strvec.size(); i++) {
      dist = 0;
      for (int q = 0; q < strvec.size(); q++) {
        for (int j = 0; j < 4; j++) {
          if (strvec[i][j] != strvec[q][j]) {
            cout << strvec[i][j] << " " << strvec[q][j] << "\n";
            dist++;
          }
        }
      }

      cout << dist << "\n";
    }

    return 0;
  }
}
