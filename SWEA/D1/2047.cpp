#include <iostream>
#include <string>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

string str;

int main() {
    fastIo;

    getline(cin, str);

    // for (int i = 0; i < str.length(); i++) {
    //     str[i] = toupper(str[i]);
    // }

    // 아래와 같은코드
    for (auto &a : str) {
        a = toupper(a);
    }

    cout << str;

    return 0;
}