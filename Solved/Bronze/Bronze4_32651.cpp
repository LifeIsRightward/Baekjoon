#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n = 0;

    cin >> n;

    if (n > 100000) {
        cout << "No" << "\n";
    } else {
        if (n % 2024 == 0) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }

    return 0;
}