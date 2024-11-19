#include <iostream>
#include <vector>

using namespace std;

vector<int> vec;
int num = 0;
int tmp = 0;

int main() {
  // FastIO
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> num;

  for (int i = 0; i < num; i++) {
    cin >> tmp;
    // 이 문제는 vector를 사용해야하는 이유를 알고,  vector의 insert를 활용할 수
    // 있는지를 물어보는거 같다.
    vec.insert(vec.begin() + (i - tmp), i + 1);
  }

  for (const auto a : vec) {
    cout << a << " ";
  }

  return 0;
}