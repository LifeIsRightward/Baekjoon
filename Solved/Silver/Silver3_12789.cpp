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
    // 0부터 순서대로 증가할 숫자
    int cmpnum = 1;
    // 결과 String
    string str = "Nice";
    queue<int> que;
    stack<int> stk;

    cin >> num;

    // 일단 큐에 다 집어넣어 ㅇㅇ
    for (int i = 0; i < num; i++) {
        cin >> temp;
        que.push(temp);
    }

    // 스택의 초기 값이 없어서 null이기때문에 비교 불가능해서, 임시로 그냥 넣어줌.
    stk.push(10000);

    while (!que.empty()) {
        if (cmpnum == que.front()) {
            cmpnum++;
            que.pop();
        } else if (cmpnum == stk.top()) {
            cmpnum++;
            stk.pop();
        } else {
            stk.push(que.front());
            que.pop();
        }
    }

    while (stk.top() != 10000) {
        if (cmpnum == stk.top()) {
            cmpnum++;
            stk.pop();
        } else {
            str = "Sad";
            break;
        }
    }

    cout << str;

    return 0;
}