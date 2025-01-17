#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c, d = 0;
    int total = 0;

    cin >> a >> b >> c >> d >> total;

    if ((total * 4) - (a + b + c + d) <= 0) {
        cout << "0" << "\n";
    } else {
        cout << (total * 4) - (a + b + c + d) << "\n";
    }

    return 0;
}