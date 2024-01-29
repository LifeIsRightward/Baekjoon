#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  // printf-(c언어) 버퍼랑 cout-(c++) 버퍼를 나누겠다
  cin.tie(NULL);
  // cout, cin의 묶여있는 버퍼를 묶음 해제하는 느낌

  int n = 0;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    cout << i << "\n";
  }

  return 0;
}