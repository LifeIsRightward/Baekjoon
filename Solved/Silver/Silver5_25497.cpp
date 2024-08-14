#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

// 이 문제는 L - R 스택, S - K 스택을 따로 관리하는게 맞는거 같아
// 난 하나로만 풀려다 보니까 문제가 생겼어 ㅇㅇ

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int cnt = 0;
    char intmp;
    // 스크립트가 꼬여서 더 이상 진행이 안될때, 입력을 받아도 무시하기 위한 flag
    bool flag = false;
    stack<char> Lstk;
    stack<char> Sstk;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> intmp;

        if (!flag) {
            // 숫자. 일반 기술에 대한 cnt++ 처리
            if (intmp - '0' >= 1 && intmp - '0' <= 9) {
                cnt++;
            } else if (intmp == 'L') {
                // 연계 기술 처리를 위해 스택에 삽입
                Lstk.push(intmp);
            } else if (intmp == 'S') {
                Sstk.push(intmp);
            } else if (intmp == 'R') {
                if (!Lstk.empty() && Lstk.top() == 'L') {
                    cnt++;
                    Lstk.pop();
                } else {
                    flag = true;
                }
            } else if (intmp == 'K') {
                if (!Sstk.empty() && Sstk.top() == 'S') {
                    cnt++;
                    Sstk.pop();
                } else {
                    flag = true;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}