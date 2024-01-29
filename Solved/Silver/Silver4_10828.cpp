#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int TestCase = 0;
  cin >> TestCase;

  stack<int> stk;
  string str;

  for (int i = 0; i < TestCase; i++) {
    cin >> str;

    if (str == "push") {
      int temp = 0;
      cin >> temp;
      stk.push(temp);
    } else if (str == "pop") {
      if (stk.empty()) {
        cout << "-1"
             << "\n";
      } else {
        cout << stk.top() << "\n";
        stk.pop();
      }
    } else if (str == "size") {
      cout << stk.size() << "\n";
    } else if (str == "empty") {
      if (stk.empty()) {
        cout << "1"
             << "\n";
      } else {
        cout << "0"
             << "\n";
      }
    } else if (str == "top") {
      if (stk.empty()) {
        cout << "-1"
             << "\n";
      } else {
        cout << stk.top() << "\n";
      }
    }
  }
  return 0;
}
