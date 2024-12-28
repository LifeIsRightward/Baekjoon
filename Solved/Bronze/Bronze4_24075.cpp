#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b = 0;
    cin >> a >> b;

    int plus = a + b;
    int minus = a - b;

    cout << max(plus, minus) << "\n";
    cout << min(plus, minus) << "\n";

    return 0;
}