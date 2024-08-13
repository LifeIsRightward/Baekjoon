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

    // ���: 1, â��: 0 [�ε����� ���� ������]
    dp[1] = 1;
    dp[2] = 0;
    dp[3] = 1;
    dp[4] = 1;
    dp[5] = 1;

    for (int i = 6; i <= n; i++) {
        // �� ���� ������ ����� �̱�Ŷ�� -> �������� ������ ����� �� ��������
        // �ϳ��� �� ����
        // �׷��� 1���� �߰��ȴٸ�, ������ ����� �������⶧����, �� ����� �̱��
        // ��.
        if (dp[i - 1] == 1 && dp[i - 3] == 1 && dp[i - 4] == 1) {
            dp[i] = 0; // i���� ���� �־����� ��, ����̰� ��.(â���̰� �̱�.)
        } else {
            dp[i] = 1; // i���� ���� �־����� ��, â���̰� ��. (����̰� �̱�.)
        }
    }

    if (dp[n] == 1) {
        cout << "SK" << "\n";
    } else {
        cout << "CY" << "\n";
    }
    return 0;
}
