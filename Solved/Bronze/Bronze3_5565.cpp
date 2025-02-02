#include <bits/stdc++.h>

using namespace std;

int main() {

    int given = 0;

    int tmp, total = 0;

    cin >> given;

    for (int i = 0; i < 9; i++) {
        cin >> tmp;
        total += tmp;
    }

    cout << given - total << "\n";

    return 0;
}