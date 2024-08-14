#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  int cnt = 0;
  char intmp, stktmp;
  bool L = false;
  bool S = false;
  stack<char> stk;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> intmp;
    stk.push(intmp);
  }

  while (!stk.empty()) {
    stktmp = stk.top();
    if (stktmp - '0' >= 1 && stktmp - '0' <= 9) {
      stk.pop();
      cnt++;
    } else if (stktmp == 'L' || stktmp == 'S') {
      if (stktmp == 'L') {
        stk.pop();
        L = true;
        cout << "L 걸림" << "\n";
      } else {
        stk.pop();
        S = true;
        cout << "S 걸림" << "\n";
      }
    } else if (stktmp == 'R' || stktmp == 'K') {
      if (stktmp == 'R' && L) {
        stk.pop();
        L = false;
        cnt++;
        cout << "R이랑 L 걸림" << "\n";
      } else if (stktmp == 'K' && S) {
        stk.pop();
        S = false;
        cnt++;
        cout << "K이랑 S 걸림" << "\n";
      } else {
        stk.pop();
        cout << "그냥 빠져나온 녀석(짝이 없는 놈)" << stktmp << "\n";
      }
    }
  }

  cout << cnt;
  return 0;
}