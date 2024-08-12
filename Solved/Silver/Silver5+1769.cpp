#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    int sum = 0;
    int cnt = 0;
    bool flag = true;

    cin >> str;

    while (flag) {
        for (int i = 0; i < str.length(); i++) {
            sum += str[i] - '0';
        }

        if (sum < 10) {
            flag = false;
        }
        str = sum;
        cnt++;
    }

    cout << cnt << "\n";
    if (sum / 3 == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
