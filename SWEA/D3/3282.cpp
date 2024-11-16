#include <bits/stdc++.h>

using namespace std;

int testcase = 0;
int n, k = 0;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> testcase;

  for (int i = 0; i < testcase; i++) {
    cin >> n >> k;

    // dp[i][j] 부피가 j 이고, i번째 물건까지 고려했을 때의 최대 가치 합
    int dp[101][101];
    // 부피에 대한 배열
    int w[101];
    // 가치에 대한 배열
    int c[101];

    // 부피와 가치를 입력
    for (int i = 1; i <= n; i++) {
      cin >> w[i] >> c[i];
    }

    // 물건의 개수 만큼 돌거고
    for (int i = 1; i <= n; i++) {
      // 그 부피 만큼도 볼건데
      for (int j = 1; j <= k; j++) {
        // i 번째 물건이 정해진 부피인 j보다 크다면? -> 고려조차 할 수 없음
        // 안 넣는 방법밖에 선택권이 없다면 이전에 구한 최댓값을 가져옴
        // -> dp[i][j] = dp[i-1][j]
        if (w[i] > j) {
          dp[i][j] = dp[i - 1][j];
        } else {
          dp[i][j] = max(c[i] + dp[i - 1][j - w[i]], dp[i - 1][j]);
        }
      }
    }
    cout << "#" << i + 1 << " " << dp[n][k] << "\n ";
  }

  return 0;
}
