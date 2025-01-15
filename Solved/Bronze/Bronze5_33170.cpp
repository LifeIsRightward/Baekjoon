#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c = 0;

    cin >> a >> b >> c;

    if (a + b + c <= 21) {
        cout << "1" << "\n";
    } else {
        cout << "0" << "\n";
    }

    return 0;
}