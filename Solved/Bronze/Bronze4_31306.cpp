#include <bits/stdc++.h>

using namespace std;

int main() {

    string str;

    cin >> str;

    int iny = 0;
    int outy = 0;

    for (auto a : str) {
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
            outy++;
        }
        if (a == 'y') {
            iny++;
        }
    }

    cout << outy << " " << outy + iny << "\n";

    return 0;
}