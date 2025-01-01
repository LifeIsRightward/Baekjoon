#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, d = 0;

    cin >> a >> b >> c >> d;

    int m = a * b;
    int p = c * d;

    if (m > p) {
        cout << "M" << "\n";
    } else if (m == p) {
        cout << "E" << "\n";
    } else {
        cout << "P" << "\n";
    }

    return 0;
}