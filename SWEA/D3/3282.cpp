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

        int product_kind_weight[101];
        int product_value[101];

        for (int u = 1; u <= n; u++) {
            cin >> product_kind_weight[u] >> product_value[u];
        }
        // 앞 -> 물건의 최대 종류, 뒤 -> 물건의 최대 부피로 초기화
        // 즉, dp[i][j]는, i번째 물건까지 담고, j의 리미트 부피일때의 최대 가치 값
        int dp[101][1001];

        // dp 배열 초기화
        for (int j = 0; j <= n; j++) {
            for (int q = 0; q <= k; q++) {
                dp[j][q] = 0;
            }
        }

        // 배낭 무게의 limit 1부터 결국 입력된 최대 배낭무게까지 돌아갈거임
        for (int limit = 1; limit <= k; limit++) {
            // 첫 번째 물품부터, 마지막 물품까지 돌면서, 해당 회차까지 물품이 들어간, limit 부피까지의 최대 가치 값
            for (int row = 1; row <= n; row++) {
                if (product_kind_weight[row] > limit) {
                    dp[row][limit] = dp[row - 1][limit];
                } else { // 내가 지금 들여보낼 물건 무게를 뺀 limit 무게에서의  이전 물건까지 본 녀석의 최대 밸류값 + 지금 들여보낼 물건의 가치 vs 이전 값
                    dp[row][limit] = max(dp[row - 1][limit - product_kind_weight[row]] + product_value[row], dp[row - 1][limit]);
                }
            }
        }

        cout << "#" << i + 1 << " " << dp[n][k] << "\n";
    }

    return 0;
}
