#include <iostream>
#include <string>

using namespace std;

int main() {

    string str;

    int n, a, b = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str >> a >> b;

        for (int j = 0; j < str.length(); j++) {
            if (j >= a && j <= b - 1) {

            } else {
                cout << str[j];
            }
        }
        cout << "\n";
    }

    return 0;
}