#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;
    int total = 0;

    cin >> str;

    if (str.length() == 2) {
        // cout << "branch1" << "\n";
        for (const auto a : str) {
            total += a - '0';
        }

        cout << total;
    } else if (str.length() == 3) {
        // cout << "branch2" << "\n";
        if (str[0] == '1') {
            total = stoi(str.substr(0, 2)) + str[2] - '0';
            cout << total;
        } else {
            total = str[0] - '0' + stoi(str.substr(1, 2));
            cout << total;
        }
    } else if (str.length() == 4) {
        // cout << "branch3" << "\n";
        cout << "20";
        // 1010 경우밖에 없을테니 ㅇㅇ
    }

    return 0;
}