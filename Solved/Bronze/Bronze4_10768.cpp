#include <algorithm>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b = 0;

    cin >> a;
    cin >> b;

    if (a == 2) {
        if (b == 18) {
            cout << "Special";
        } else if (b < 18) {
            cout << "Before";
        } else {
            cout << "After";
        }
    } else if (a > 2) {
        cout << "After";
    } else {
        cout << "Before";
    }

    return 0;
}
