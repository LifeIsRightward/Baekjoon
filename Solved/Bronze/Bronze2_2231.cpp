#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // �Է�
    int N;
    cin >> N;

    // ���� �ذ�
    for (int i = 1; i < N; i++) {
        int tmp = i; //-> M(�������� �� �ڸ����� ��)
        int sum = i; // -> M(������)

        while (tmp != 0) {
            sum += tmp % 10; // 1�� �ڸ� ���ϱ�
            // M(������) + M�� k��° �ڸ� + M�� k-1���� �ڸ� + ...
            tmp /= 10;
        }

        if (sum == N) {
            cout << i << '\n';
            return 0;
        }
    }

    cout << 0 << '\n';
    return 0;
}