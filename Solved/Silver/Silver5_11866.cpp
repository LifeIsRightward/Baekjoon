#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int total = 0;
  int shift = 0;
  int temp = 0;

  cin >> total >> shift;
  vector<int> vec;
  queue<int> que;

  // 큐 초기화
  for (int i = 1; i <= total; i++) {
    que.push(i);
  }

  // 앞으로 땡겨서 뒤로 다시 넣고, 원하는 위치에서 pop 하고 ㅇㅇ
  while (!que.empty()) {
    for (int i = 0; i < shift - 1; i++) {
      temp = que.front();
      que.push(temp);
      que.pop();
    }

    vec.push_back(que.front());
    que.pop();
  }

  cout << "<";
  for (int i = 0; i < vec.size(); i++) {
    if (i != vec.size() - 1) {
      cout << vec[i] << ", ";
    } else {
      cout << vec[i] << ">";
    }
  }
  return 0;
}
