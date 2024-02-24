#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int isSquare(int num) {
    int root = static_cast<int>(sqrt(num));
    return root * root == num ? 1 : 2;
    // root * root == num �̶�� ���� ��Ȯ�� �������� ��������, �̸� ������ �� ��Ȯ�� num�� �����Եȴ�.
    // �̶�, ���׿����ڸ� ����Ͽ� true �� 1�� return, false �� 2�� �����ϰ� �������.
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dp[50001];
    int n = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (isSquare(i) == 1) {
            dp[i] = 1; // �������� dp ���� 1�� �ʱ�ȭ
        } else {
            dp[i] = 0; // �װ� �ƴ϶��, 0���� �ʱ�ȭ. ���ϸ� ������ ��
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
