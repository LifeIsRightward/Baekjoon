#include <bits/stdc++.h>

using namespace std;

int testcase = 0;
int n = 0;

int dp[11][11];

int main() {
  cin >> testcase;

  dp[0][0] = 1;
  dp[1][0] = 1;
  dp[1][1] = 1;

  // dp 배열 다 만들어두기
  for (int i = 2; i < 11; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        dp[i][j] = 1;
      } else {
        dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
      }
    }
  }

  for (int i = 0; i < testcase; i++) {
    cin >> n;
    cout << "#" << i + 1 << "\n";
    for (int j = 0; j < n; j++) {
      for (int k = 0; k <= j; k++) {
        cout << dp[j][k] << " ";
      }
      cout << "\n";
    }
  }

  return 0;
}