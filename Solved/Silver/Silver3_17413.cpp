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

  queue<char> que;
  stack<char> stk;
  bool tagCheck = false;
  string str;

  // 그냥 cin 으로 받으면, 공백이 제거되서 입력되기 때문에 getline을 사용함.
  getline(cin, str);

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == '<') {
      tagCheck = true;
      // True로 바뀐 순간 이전까지에 스택에 있었던 것들을 빼내서 큐에 추가함
      // 그러나, 비어있다면(아직까지 일반 문자열이 들어온게 없다면 Pass)
      while (!stk.empty()) {
        que.push(stk.top());
        stk.pop();
      }
    } else if (str[i] == '>') {  // 태그 끝이 들어오면, 해당 문자 >를 큐에
                                 // push하고, flag를 false로 바꿈
      que.push(str[i]);
      tagCheck = false;
    }

    // 이제 체크를 진행함.

    // 시작 태그 이후의 문자들
    if (tagCheck) {
      que.push(str[i]);
    } else {
      // 이유를 모르겠는데 '>' 이게 자꾸 추가됨 ㅇㅇ
      if (str[i] != '>') {
        if (str[i] == ' ') {
          while (!stk.empty()) {
            que.push(stk.top());
            stk.pop();
          }
          que.push(' ');
        } else {
          stk.push(str[i]);
        }
      }
    }
  }

  // 마지막 처리
  while (!stk.empty()) {
    que.push(stk.top());
    stk.pop();
  }
  // 출력을 위함
  while (!que.empty()) {
    cout << que.front();
    que.pop();
  }
  cout << "\n";
  return 0;
}
