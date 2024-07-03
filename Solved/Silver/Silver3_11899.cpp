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

    // 여는 괄호만 '(' 스택에 저장
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
                // 짝이 없는 닫힌 괄호 -> 큐 에 추가(나중에 사이즈로 알아볼거임)
                q.push(str[i]);
            }
        }
    }

    // stk.size()는 열린괄혼데, 순서상 맞지 않아서 짝이 없었던 애들
    // q.size()는 닫힌괄혼데, 순서상 맞지 않아서 짝이 없었던 애들
    cout << q.size() + stk.size();
    return 0;
}
