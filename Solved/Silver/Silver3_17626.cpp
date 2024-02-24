#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int isSquare(int num) {
    int root = static_cast<int>(sqrt(num));
    return root * root == num ? 1 : 2;
    // root * root == num 이라는 뜻은 정확히 제곱근이 구해졌고, 이를 곱했을 때 정확히 num이 나오게된다.
    // 이때, 삼항연산자를 사용하여 true 면 1을 return, false 면 2를 리턴하게 만들었다.
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dp[50001];
    int n = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (isSquare(i) == 1) {
            dp[i] = 1; // 제곱수의 dp 값을 1로 초기화
        } else {
            dp[i] = 0; // 그게 아니라면, 0으로 초기화. 안하면 쓰레기 값
        }
    }

    for (int i = 1; i <= n; i++) {
        if (dp[i] != 0) {
            continue;
        } else {
            dp[i] = dp[i - 1] + 1;
            for (int j = 1; j * j <= i; j++) {
                dp[i] = min(dp[i], dp[j * j] + dp[i - j * j]);
            }
        }
    }

    cout << dp[n];

    return 0;
}
