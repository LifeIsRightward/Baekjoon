#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc = 0;

    cin >> tc;

    pair<string, string> tmp;

    for (int i = 0; i < tc; i++) {
        cin >> tmp.first >> tmp.second;

        if (tmp.first == tmp.second) {
            cout << "OK" << "\n";
        } else {
            cout << "ERROR" << "\n";
        }
    }

    return 0;
}