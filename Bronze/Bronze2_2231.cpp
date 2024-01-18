#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // 입력
    int N;
    cin >> N;

    // 문제 해결
    for (int i = 1; i < N; i++) {
        int tmp = i; //-> M(생성자의 각 자리수의 합)
        int sum = i; // -> M(생성자)

        while (tmp != 0) {
            sum += tmp % 10; // 1의 자리 더하기
            // M(생성자) + M의 k번째 자리 + M의 k-1번쨰 자리 + ...
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