#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int arr[501][501];
int dp[501][501];
int n;

// dp의 dottom up 방식을 사용하나 보다
int main() {
    fastIo;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> arr[i][j];
        }
    }

    // 맨 아래줄의(bottom) dp배열을 initialize 함.(bottom - up을 위하여)
    for (int i = 1; i <= n; i++) {
        dp[n][i] = arr[n][i];
    }

    // 5가 입력되면, 4번째 부터 시작함. 5번째(bottom)을 들여다 보기위해.
    // 5부터 시작하면 out of index가 발생할거임
    // 최종적으로 dp[1][1]이 최대값을 저장한 배열이 될 거임.
    // 밑에서부터 각각의 위치에는 최댓값이 입력되어있을거임 (dp[i][j])
    // 즉, dp[i][j]는 i,j 위치에서의 max값임.(max(내 밑, 내 밑 우측을 계산함으로써
    // 보장됨))
    // dp[i][j] = arr[i][j](내 위치에 저장된 원래 값) + max(dp[i+1][j] - 내 바로
    // 밑에 녀석, dp[i+1][j+1] - 내 바로 밑에 우측 녀석)
    // 즉, i,j번째 최대값은 내 위치의 원래 값 + max(내 밑, 내 밑에서
    // 우측인놈)이됨.
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            dp[i][j] = arr[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }

    // dp[1][1]은 밑에 녀석들의 최대값이 나오는것이 보장된 값들의 합으로 모인 최종
    // 최대값임.
    cout << dp[1][1] << endl;

    return 0;
}
