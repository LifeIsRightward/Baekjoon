#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

stack<int> stk;

void push(int n) { stk.push(n); }
void pop() {
  if (!stk.empty()) {
    cout << stk.top() << "\n";
    stk.pop();
  } else {
    cout << "-1"
         << "\n";
  }
}
void size() { cout << stk.size() << "\n"; }
void empty() {
  if (!stk.empty()) {
    cout << "0"
         << "\n";
  } else {
    cout << "1"
         << "\n";
  }
}
void top() {
  if (!stk.empty()) {
    cout << stk.top() << "\n";
  } else {
    cout << "-1"
         << "\n";
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int temp = 0;
  int command = 0;
  int order = 0;

  cin >> order;

  for (int i = 0; i < order; i++) {
    cin >> command;
    if (command == 1) {
      cin >> temp;
      push(temp);
    } else if (command == 2) {
      pop();
    } else if (command == 3) {
      size();
    } else if (command == 4) {
      empty();
    } else if (command == 5) {
      top();
    }
  }
  return 0;
}
