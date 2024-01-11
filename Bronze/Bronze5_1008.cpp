#include <iostream>
// 실수의 나머지를 소수점 자리 고정과 표현 자리수를 고정시키는 문제
using namespace std;

int main() {
  double a = 0;
  double b = 0;
  cin >> a >> b;

  cout << fixed;      // 소수점 자리수를 고정하겠다
  cout.precision(9);  // 몇 자리까지 출력할것인가
  cout << a / b;

  return 0;
}