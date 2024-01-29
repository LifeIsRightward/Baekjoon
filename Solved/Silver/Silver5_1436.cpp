#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 0;    // 몇 번째 종말의 숫자인지(666의 싸이클)
  int cnt = 0;  // while 문을 돌리면서 카운팅해주는 변수 -> N이랑 비교하기 위함

  cin >> N;

  for (int i = 666;; i++) {
    int temp = i;

    while (temp >= 666) {
      if ((temp % 1000) == 666) {  // 종말의 숫자 규칙을 찾는 방법
        cnt++;  // 종말의 규칙 숫자가 몇번째 숫자인지
        break;
      }
      temp /= 10;
    }
    if (N == cnt) {  // 같지 않으면 계속 돌거임(입력한 숫자랑 같지 않으면)
      cout << i;
      break;
    }
  }
  return 0;
}
