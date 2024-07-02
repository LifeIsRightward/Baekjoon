#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // 승찬이 앞에 학생 수
  int num = 0;
  int temp = 0;
  // 1부터 순서대로 증가할 숫ㅏ
  int cmpnum = 1;
  // 승찬이의 번호표 값(마지막 번호표 + 1 해 승찬이 번호표임 ㅇㅇ)
  int goalnum = num + 1;
  // 결과 String
  string str;
  queue<int> que;
  stack<int> stk;

  cin >> num;

  // 일단 큐에 다 집어넣어 ㅇㅇ
  for (int i = 0; i < num; i++) {
    cin >> temp;
    que.push(temp);
  }
  // 스택의 초기 값이 없어서 null이기때문에 비교 불가능해서, 임시로 그냥 넣어줌.
  stk.push(0);

  while (true) {
    if (cmpnum == stk.top() - 1) {
      stk.pop();
      cmpnum++;
    } else if (cmpnum == que.front()) {
      cmpnum++;
      que.pop();
    } else {
      if (!que.empty()) {
        stk.push(que.front());
        que.pop();
      } else {
        break;
      }
    }
    cout << cmpnum << "\n";
  }

  if (cmpnum == num + 1) {
    cout << "Nice";
  } else {
    cout << "Sad";
  }

  return 0;
}
