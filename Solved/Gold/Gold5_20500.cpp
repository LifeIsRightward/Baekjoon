#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define mod 1000000007

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    // dp[나머지][자릿수]
    // 자릿수를 아무리 늘려도 결국, 3으로 나누면 나머지는 0, 1 ,2
    // 이전에 나머지에 + 1을하든 + 5를하든(1의자리 5 고정에다가 앞에 1아님 5를 추가한다는 뜻임)
    // dp[0][2] 에서 1을 추가, dp[(0+1) % 3][3] 하면 dp[1][3]
    // dp[0][2] 에서 5를 추가, dp[(0+5) % 3][3] 하면 dp[2][3]
    // dp[1][2] 에서 1을 추가, dp[(1+1) % 3][3] 하면 dp[2][3]
    // dp[1][2] 에서 5를 추가, dp[(1+5) % 3][3] 하면 dp[0][3]
    // dp[2][2] 에서 1을 추가, dp[(2+1) % 3][3] 하면 dp[0][3]
    // dp[2][2] 에서 1을 추가, dp[(2+5) % 3][3] 하면 dp[1][3]

    // 점화식 세우기
    // dp[0][j] = (dp[1][j-1] + dp[2][j-1]) %  mod;
    // dp[1][j] = (dp[0][j-1] + dp[2][j-1]) %  mod;
    // dp[2][j] = (dp[0][j-1] + dp[1][j-1]) %  mod;
    int dp[3][1516];

    // 3의 배수 특징 -> 각자리 다 더한 값 % 3 이 나누어진다.
    // 5의 배수 특징 -> 0 아니면, 5임
    // 근데 이 문제에서는 1아니면 5로 구성되어있으니
    // 즉, 1의 자리(끝 자리)가 5로 고정이며, 각 자리의 합이 3으로 나누어 떨어진다.
    // 이건 부수적인 정보

    // 1자리 숫자에 나머지가 0 -> 진짜 없음
    dp[0][1] = 0;
    // 2자리 숫자에 나머지가 0 -> 15 하나 있음(15를 3으로 나눠서 5 ... 0)
    dp[0][2] = 1;
    // 2자리 숫자에 나머지가 1 -> 55 하나 있음(55를 3으로 나눠서 18 ... 1)
    dp[1][2] = 1;
    // 2질; 슷자에 나머지가 2 -> 15, 55 말고는 더 숫자가 없음. 고로 0개
    dp[2][2] = 0;

    for (int j = 3; j <= N; j++) {
        dp[0][j] = (dp[1][j - 1] + dp[2][j - 1]) % mod;
        dp[1][j] = (dp[0][j - 1] + dp[2][j - 1]) % mod;
        dp[2][j] = (dp[0][j - 1] + dp[1][j - 1]) % mod;
    }

    // N자리이며, 나머지가 없는. 즉, N자리의 15의 배수의 갯수
    cout << dp[0][N];

    return 0;
}
