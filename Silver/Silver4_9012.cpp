#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int testcase = 0;
  cin >> testcase;

  while (testcase--) {
    stack<char> stck;
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
      if (stck.empty()) {  // 비어있는 스택이라면 하나는 push를 해줘야하는듯함
        stck.push(str[i]);
      } else if (stck.top() == '(' && str[i] == ')') {
        // 현재 스택의 top이 열린 괄호이며, 들어올 문자가 닫힌 괄호이면, 스택에
        // 있는 열린괄호를 pop한다.
        // 열린괄호만을 push시킴
        stck.pop();
      } else {
        stck.push(str[i]);
      }
    }

    if (stck.empty()) {
      cout << "YES"
           << "\n";
    } else {
      cout << "NO"
           << "\n";
    }
  }

  return 0;
}
