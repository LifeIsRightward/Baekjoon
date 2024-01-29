#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // 에라토스테네스의 채
  // 여기서의 큰 알고리즘은, 에라토스테네스의 채를 만든 후,
  // 입력받은 int를 bool벡터에 비교해보는것이 핵심 알고리즘이다.
  int N, temp, cnt = 0;
  cin >> N;

  vector<int> vec2(N, 0);

  for (int k = 0; k < N; k++) {
    cin >> temp;
    vec2[k] = temp;
  }

  vector<bool> vec(1001, true);
  vec[0] = false;
  vec[1] = false;
  // M 부터 돌리니까 2의 배수가 안걸러지네 ㅇㅇ
  // 가만보면 2의 배수가 가장 많이 걸리잖아
  for (int i = 2; i <= 1000; i++) {
    if (vec[i]) {
      for (int q = i * i; q <= 1000; q += i) {
        vec[q] = false;
      }
    }
  }
  // int 인덱스에 들어있는 숫자가 fasle 인지 true인지 판별에서 소수인지 아닌지를
  // 판별한다.
  for (int h = 0; h < vec2.size(); h++) {
    if (vec[vec2[h]]) {
      cnt++;
    }
  }

  cout << cnt;
  return 0;
}