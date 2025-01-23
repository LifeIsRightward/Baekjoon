#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, d = 0;

    cin >> a >> b >> c >> d;

    if (a > c + 1 && b > d + 1) {
        cout << "1" << '\n';
    } else {
        cout << "0" << "\n";
    }

    return 0;
}