#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  // printf-(c언어) 버퍼랑 cout-(c++) 버퍼를 나누겠다
  cin.tie(NULL);
  // cout, cin의 묶여있는 버퍼를 묶음 해제하는 느낌
  int n = 0;
  int result = 1;
  // n을 1로 안하면 안곱해지겠지 당연히 팩토리얼에서 ㅇㅇ

  cin >> n;

  if (n == 0) {
    cout << 1 << "\n";
  } else {
    for (int i = n; i > 0; i--) {
      result *= i;
    }
    cout << result << "\n";
  }

  return 0;
}