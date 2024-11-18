#include <iostream>
#include <string>

using namespace std;
int main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string S;
    getline(cin, S);

    if (S.length() <= 2 || !(S.front() == '\"' && S.back() == '\"')) // 길이가 2이하 또는 정확한 문자열이 아닌 경우
    {
        cout << "CE";
    } else {
        for (int i = 1; i < S.length() - 1; ++i) {
            cout << S[i];
        }
    }
    return 0;
}