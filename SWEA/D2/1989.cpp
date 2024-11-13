#include <bits/stdc++.h>

// 1989 초심자의 회문 검사 -> 쌩구현임 ㅇㅇ
using namespace std;

int testcase = 0;
bool check = true;
string str;

int main() {

    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        cin >> str;

        check = true;

        // str.length()는 진짜 문자열의 길이가 나옴. 아마 스페이스바도 있음 포함해서 +1 해주면서 계산하는 듯
        // cout << str.length() << "\n";

        if (str.length() / 2 == 0) {
            for (int j = 0; j < str.length() / 2 + 1; j++) {
                if (str[j] != str[str.length() - j - 1]) {
                    check = false;
                }
            }
        } else {
            for (int j = 0; j < str.length() / 2; j++) {
                if (str[j] != str[str.length() - j - 1]) {
                    check = false;
                }
            }
        }

        if (check) {
            cout << "#" << i + 1 << " 1" << "\n";
        } else {
            cout << "#" << i + 1 << " 0" << "\n";
        }
    }

    return 0;
}