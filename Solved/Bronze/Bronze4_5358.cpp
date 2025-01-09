#include <bits/stdc++.h>

using namespace std;

int main() {

    string str;

    while (true) {
        cin >> str;

        if (cin.eof()) {
            break;
        }

        for (auto a : str) {
            if (a == 'e')
                cout << 'i';
            else if (a == 'i')
                cout << 'e';
            else if (a == 'E')
                cout << 'I';
            else if (a == 'I')
                cout << 'E';
            else
                cout << a;
        }
        cout << "\n";
    }

    return 0;
}