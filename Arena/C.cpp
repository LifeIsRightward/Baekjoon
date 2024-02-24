#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int s = 1;
int carrot = 0;
vector<int> A(51, 0); // A개 지불하여 i번째 스피드 효과
vector<int> B(51, 0); // 구매 직후, s가 Bi 만큼 증가
void act1() { carrot += s; }
void act2(int A, int B) {
    carrot -= A;
    s += B;
}

// dp
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N = 0;
    int Ksec = 0;

    cin >> N >> Ksec;

    int dp[Ksec + 1][Ksec + 1];

    dp[1][1] = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 1; i < Ksec - 1; i++) {
        for (int j = N - 1; j >= 0; j--) {
            if (carrot >= A[j]) {
                act2(A[j], B[j]);
                cout << j << "\n";
            }
        }
    }

    cout << carrot;
    return 0;
}
