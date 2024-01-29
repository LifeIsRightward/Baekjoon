#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int X = 0;
  cin >> X;

  int i = 0;
  // i는 대각선의 줄 수를 의미한다.
  while (X > i) {
    X -= i;
    i++;
  }
  // 이렇게 돌고나면 x는 i만큼 돌고 난 나머지가 될것이다 즉, 홀수번째에서는 분모

  if (i % 2 == 0) {
    cout << X << "/" << i + 1 - X << "\n";
  } else {
    cout << i + 1 - X << "/" << X << "\n";
  }

  return 0;
}
