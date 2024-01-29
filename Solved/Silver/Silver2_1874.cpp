#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N = 0;
  int temp = 0;
  int k = 1;  // 입력이 어디까지 진행되었는지를 나타내는 포인터(커서)
  //(증가만 가능하다.)
  // 1부터 N까지기 때문에 무조건 1이 먼저 스택에 삽입되어야한다.
  string op;
  stack<int> stk;

  cin >> N;
  while (N--) {
    cin >> temp;

    while (k <= temp) {
      stk.push(k);
      op += '+';
      k++;
    }

    // 입력받아서 while에서 다 돌고 push 된게 현재 top이랑 같지 않다는것은
    // 이미 top과 temp 가 같아서 pop이 됐다는 뜻이고
    // 그러면 오름차순을 유지하면서 순열을 만들수가 없다.
    if (stk.top() != temp) {
      cout << "NO";
      return 0;
    }
    stk.pop();
    op += '-';
  }

  for (int i = 0; i < op.length(); i++) {
    cout << op[i] << "\n";
  }
  return 0;
}
