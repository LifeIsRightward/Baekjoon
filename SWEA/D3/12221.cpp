#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define fastIo                                                                                                                                                 \
    ios_base::sync_with_stdio(false);                                                                                                                          \
    cin.tie(NULL);                                                                                                                                             \
    cout.tie(NULL);

int testcase = 0;

int main() {
    fastIo;

    cin >> testcase;

    for (int i = 0; i < testcase; i++) {
        pair<int, int> a;
        cin >> a.first >> a.second;

        cout << "#" << i + 1 << " ";
        if (a.first >= 10 || a.second >= 10) {
            cout << "-1" << "\n";
        } else {
            cout << a.first * a.second << "\n";
        }
    }

    return 0;
}