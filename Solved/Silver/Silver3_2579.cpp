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

  int arr[N + 1];            // 해당 계단이 가지는 고유의 값.
  vector<int> dp(N + 1, 0);  // 해당 계단의 최댓값

  for (int i = 1; i <= N; i++) {
    cin >> arr[i];
  }

  dp[1] = arr[1];
  dp[2] = arr[1] + arr[2];
  dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);

  for (int i = 4; i <= N; i++) {
    dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
  }

  cout << dp[N];
  return 0;
}
