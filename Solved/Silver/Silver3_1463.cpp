#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 0;
  cin >> N;

  int dp[1000001];

  dp[0] = 0;
  dp[1] = 0;
  dp[2] = 1;
  dp[3] = 1;

  // 총 3 가지의 경우
  // +1은 해당 차시의 연산의 경우기때문에 +1을 해줌.
  // 결국 -1하거나 2나누거나 3나누는것이 연산이기때문에 + 1을 함
  // dp[i] = dp[i/3] + 1;
  // dp[i] = dp[i/2] + 1;
  // dp[i] = dp[i-1] + 1;

  for (int i = 4; i <= N; i++) {
    // 3가지 경우를 다 해보면서 min 값을 찾는거임
    dp[i] = dp[i - 1] + 1;
    if (i % 2 == 0) {
      dp[i] = min(dp[i], dp[i / 2] + 1);
    }
    if (i % 3 == 0) {
      dp[i] = min(dp[i], dp[i / 3] + 1);
    }
  }

  cout << dp[N];
  return 0;
}
