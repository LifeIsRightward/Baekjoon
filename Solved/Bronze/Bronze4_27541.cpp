#include <bits/stdc++.h>

using namespace std;

int main() {

    int n = 0;
    string str;

    cin >> n;
    cin >> str;

    if (str[str.length() - 1] == 'G') {
        for (int i = 0; i < str.length() - 1; i++) {
            cout << str[i];
        }
    } else {
        for (int i = 0; i < str.length(); i++) {
            cout << str[i];
        }
        cout << "G" << "\n";
    }

    return 0;
}