#include <iostream>
#include <vector>
using namespace std;
// dp -> 동적 프로그래밍
// 검증된 점화식을 세워야함.
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int TestCase, k, n, total = 0;
  cin >> TestCase;

  while (TestCase--) {
    cin >> k >> n;
    vector<vector<int>> vec(16, vector<int>(16, 0));

    // 1번째 층에대한 초기화 - 필수
    // 그래야 2번째층을 알고, 2번째 층을 기반으로 다시 3번째 층을 구할테니까
    for (int i = 1; i < 16; i++) {
      vec[1][i] = i;
    }

    for (int i = 2; i < 16; i++) {
      for (int j = 1; j < 16; j++) {
        vec[i][j] = vec[i][j - 1] + vec[i - 1][j];
        // 현재 층, 현재 방 = 현재 층, 이전 방 + 이전 층, 현재 방
        // 아주 적합한 점화식이다.
        // 이게 DP의 가장 기본적인거
      }
    }
    // 내가 0층을 버렸으니까 0층 + 1 을 해줘야 저장된 값들이 있을테니까 ㅇㅇ
    cout << vec[k + 1][n] << "\n";
  }

  return 0;
}
