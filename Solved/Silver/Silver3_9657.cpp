#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 0;
  int dp[1002] = {0};
  cin >> n;

  // 상근: 1, 창영: 0 [인덱스는 돌의 개수임]
  dp[1] = 0;
  dp[2] = 1;
  dp[3] = 1;
  dp[4] = 0;
  dp[5] = 0;

  for (int i = 6; i <= n; i++) {
    if (dp[i - 1] == 0 && dp[i - 3] == 0 && dp[i - 4] == 0) {
      dp[i] = 1;  // i개의 돌이 주어졌을 때, 창영이가 짐.(상근이가 이김.)
    } else {
      dp[i] = 0;  // i개의 돌이 주어졌을 때, 상근이가 짐. (창영이가 이김.)
    }
  }

  if (dp[n] == 0) {
    cout << "SK" << "\n";
  } else {
    cout << "CY" << "\n";
  }
  return 0;
}
