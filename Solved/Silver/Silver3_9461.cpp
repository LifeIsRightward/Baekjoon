#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long dp[101];

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    dp[5] = 2;

    int testcase = 0;
    int n = 0;

    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        cin >> n;
        for (int i = 6; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 5];
        }
        cout << dp[n] << "\n";
    }

    return 0;
}
