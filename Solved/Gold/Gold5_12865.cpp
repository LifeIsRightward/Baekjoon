#include <bits/stdc++.h>

using namespace std;

int n, k = 0;
int w[101];
int v[101];
// dp[n][k] = 1 ~ n 번째 물건까지 고려했을 때, 최대 k 무게까지 담을 수 있고, 그떄의  최대 가치의 합
int dp[101][100001];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // dp 배열 초기화
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            dp[i][j] = 0;
        }
    }

    cin >> n >> k;

    // 가치가 값이 되어야 함.

    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }

    for (int limit = 1; limit <= k; limit++) {
        for (int row = 1; row <= n; row++) {
            // 현재 물건의 무게가, 가방이 견딜 수 있는 최대 무게보다도 많은 경우 -> 가방에 더 들어갈 수 없는경우
            // 1. 가방에 물건이 더 안들어가는 경우 -> 이전까지 들어갔던 물건들의 최대 값
            if (w[row] > limit) {
                dp[row][limit] = dp[row - 1][limit];
            } // 가방에 물건이 더 들어가는경우
            else {
                // 현재 물건의 이전 갯수 의 가방 공간이 남은 만큼의 최대 가치 + 새로 들어올 물건의 가치
                //  Vs 이전 까지 들어갔던 물건들의 최대 가치를 비교
                dp[row][limit] = max(dp[row - 1][limit - w[row]] + v[row], dp[row - 1][limit]);
            }
        }
    }

    cout << dp[n][k];
    return 0;
}
