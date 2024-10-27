#include <iostream>
#include <string>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int t = 0;
string str;

string yy;
string mm;
string dd;

int main() {
    fastIo;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> str;

        yy = str.substr(0, 4);
        mm = str.substr(4, 2);
        dd = str.substr(6, 2);

        // 가장 큰 조건. 년이 0보다 커야지만 존재하는 년도일테니 ㅇㅇ
        if (stoi(yy) > 0) {
            if (stoi(mm) >= 1 && stoi(mm) <= 12) {
                if (stoi(mm) == 2) {
                    if (stoi(dd) >= 1 && stoi(dd) <= 28) {
                        cout << "#" << i + 1 << " " << yy << "/" << mm << "/" << dd << "\n";
                    } else {
                        cout << "#" << i + 1 << " " << "-1" << "\n";
                    }
                } else if (stoi(mm) == 4 || stoi(mm) == 6 || stoi(mm) == 9 || stoi(mm) == 11) {
                    if (stoi(dd) >= 1 && stoi(dd) <= 30) {
                        cout << "#" << i + 1 << " " << yy << "/" << mm << "/" << dd << "\n";
                    } else {
                        cout << "#" << i + 1 << " " << "-1" << "\n";
                    }
                } else {
                    if (stoi(dd) >= 1 && stoi(dd) <= 31) {
                        cout << "#" << i + 1 << " " << yy << "/" << mm << "/" << dd << "\n";
                    } else {
                        cout << "#" << i + 1 << " " << "-1" << "\n";
                    }
                }
            } else {
                cout << "#" << i + 1 << " " << "-1" << "\n";
            }
        } else {
            cout << "#" << i + 1 << " " << "-1" << "\n";
        }
    }

    return 0;
}