#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
// 어디가 빗변인지 안말해줘서 가장 큰 변이 빗변이 되어야 함 ㅇㅇ
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a, b, c = 0;
  vector<int> vec(3, 0);

  while (true) {
    cin >> a >> b >> c;
    vec[0] = a;
    vec[1] = b;
    vec[2] = c;
    sort(vec.begin(), vec.end());

    if (a == 0 && b == 0 && c == 0) {
      break;
    } else {
      if (vec[0] * vec[0] + vec[1] * vec[1] == vec[2] * vec[2]) {
        cout << "right"
             << "\n";
      } else {
        cout << "wrong"
             << "\n";
      }
    }
  }
  return 0;
}
