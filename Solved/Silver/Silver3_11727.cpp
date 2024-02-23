#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#define mod 10007
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dp[1001];

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 3;
    dp[3] = 5;
    dp[4] = 11;

    int n = 0;

    cin >> n;

    for (int i = 5; i <= n; i++) {
        dp[i] = (dp[i - 1] + 2 * (dp[i - 2])) % mod;
    }

    cout << dp[n];
    return 0;
}
