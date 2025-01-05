#include <bits/stdc++.h>

using namespace std;

int main() {

    int a = 0;
    char tmp;

    cin >> a;

    for (int i = 0; i < a; i++) {
        cin >> tmp;

        if (tmp == 'l') {
            cout << "L";
        } else {
            cout << "i";
        }
    }

    return 0;
}