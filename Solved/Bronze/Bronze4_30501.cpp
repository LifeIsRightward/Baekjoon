#include <iostream>
#include <string>

using namespace std;

int main() {

    int n = 0;
    bool flag = false;

    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;

        cin >> str;

        flag = false;
        for (auto a : str) {
            if (a == 's' || a == 'S') {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << str;
            break;
        }
    }

    return 0;
}