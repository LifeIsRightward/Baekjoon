#include <bits/stdc++.h>

using namespace std;

int main() {

    string str;

    int n = 0;
    cin >> n;
    cin >> str;

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == 'J') {
            cout << str[i - 1] << "\n";
        }
    }

    return 0;
}