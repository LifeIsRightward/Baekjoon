#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // 에라토스테네스의 채
  int M, N = 0;
  cin >> M >> N;

  vector<bool> vec(N + 1, true);
  vec[0] = false;
  vec[1] = false;
  // M 부터 돌리니까 2의 배수가 안걸러지네 ㅇㅇ
  // 가만보면 2의 배수가 가장 많이 걸리잖아
  for (int i = 2; i <= N; i++) {
    if (vec[i]) {
      for (int q = i + i; q <= N; q += i) {
        vec[q] = false;
      }
    }
  }

  for (int j = M; j <= N; j++) {
    if (vec[j]) {
      cout << j << "\n";
    }
  }

  return 0;
}