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

  // ���� ��ȣ�� '(' ���ÿ� ����
  stack<char> stk;
  queue<char> q;
  string str;
  cin >> str;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == '(') {
      stk.push('(');
    } else {
      if (!stk.empty()) {
        stk.pop();
      } else {
        // ¦�� ���� ���� ��ȣ -> ť �� �߰�(���߿� ������� �˾ƺ�����)
        q.push(str[i]);
      }
    }
  }

  // stk.size()�� ������ȥ��, ������ ���� �ʾƼ� ¦�� ������ �ֵ�
  // q.size()�� ������ȥ��, ������ ���� �ʾƼ� ¦�� ������ �ֵ�
  cout << q.size() + stk.size();
  return 0;
}
