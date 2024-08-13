#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n = 0;
    bool dp[1000000000000];
    cin >> n;

    // 상근: 1, 창영: 0 [인덱스는 돌의 개수임]
    dp[1] = 1;
    dp[2] = 0;
    dp[3] = 1;
    dp[4] = 1;
    dp[5] = 1;

    for (int i = 6; i <= n; i++) {
        // 그 전에 가져간 사람이 이긴거라면 -> 마지막에 가져간 사람이 다 가져가고
        // 하나도 안 남음
        // 그래서 1개가 추가된다면, 마지막 사람이 가져가기때문에, 그 사람이 이기게
        // 됨.
        if (dp[i - 1] == 1 && dp[i - 3] == 1 && dp[i - 4] == 1) {
            dp[i] = 0; // i개의 돌이 주어졌을 때, 상근이가 짐.(창영이가 이김.)
        } else {
            dp[i] = 1; // i개의 돌이 주어졌을 때, 창영이가 짐. (상근이가 이김.)
        }
    }

    if (dp[n] == 1) {
        cout << "SK" << "\n";
    } else {
        cout << "CY" << "\n";
    }
    return 0;
}
