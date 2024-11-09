#include <bits/stdc++.h>

using namespace std;

int patty, cheeze = 0;
int total = 0;

int main() {

    cin >> patty >> cheeze;

    if (patty > cheeze) {
        while (true) {
            if (patty - 1 == cheeze) {
                cout << patty + cheeze;
                break;
            } else {
                patty--;
            }
        }
    } else {
        while (true) {
            if (patty - 1 == cheeze) {
                cout << patty + cheeze;
                break;
            } else {
                cheeze--;
            }
        }
    }

    return 0;
}