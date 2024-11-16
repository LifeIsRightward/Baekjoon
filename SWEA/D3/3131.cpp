#include <bits/stdc++.h>

using namespace std;

// false -> 소수 후보 | true -> 소수가 아님 (배수로 제거된 상태)
bool prime[1000001] = {
    false,
};

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 2부터 100만까지 순회하며 소수를 찾음
    for (int i = 2; i <= 1000000; i++) {
        // 아직 배수로 제거되지 않은 숫자는 소수
        if (!prime[i]) {
            prime[i] = true; // 소수로 확인 (출력 후 소수 여부 갱신)
            cout << i << " ";

            // i의 배수는 모두 소수가 아님으로 표시
            for (int j = i + i; j <= 1000000; j += i) {
                prime[j] = true;
            }
        }
    }
    return 0;
}
