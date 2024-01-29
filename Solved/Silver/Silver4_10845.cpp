#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int testcase = 0;
  int temp = 0;
  queue<int> que;
  string str;

  cin >> testcase;

  for (int i = 0; i < testcase; i++) {
    cin >> str;
    if (str == "push") {
      cin >> temp;
      que.push(temp);
    } else if (str == "pop") {
      if (que.empty()) {
        cout << "-1"
             << "\n";
      } else {
        cout << que.front() << "\n";
        que.pop();
      }
    } else if (str == "size") {
      cout << que.size() << "\n";
    } else if (str == "empty") {
      if (que.empty()) {
        cout << "1"
             << "\n";
      } else {
        cout << "0"
             << "\n";
      }
    } else if (str == "front") {
      if (que.empty()) {
        cout << "-1"
             << "\n";
      } else {
        cout << que.front() << "\n";
      }
    } else if (str == "back") {
      if (que.empty()) {
        cout << "-1"
             << "\n";
      } else {
        cout << que.back() << "\n";
      }
    }
  }
  return 0;
}
