#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b = 0;

    cin >> a >> b;

    int tmp = (a + b) % 12;

    if (tmp == 0) {
        cout << "12" << "\n";
    } else {
        cout << tmp << "\n";
    }
    return 0;
}